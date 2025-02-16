-- Ex16 – Recuperar o código dos clientes, sem repetição, que compraram algum produto no ano de 2020;
-- (usar a função extract)
SELECT DISTINCT idcliente FROM compras
WHERE EXTRACT(YEAR FROM dtcompra) = 2020;

-- Ex17 – Procurar o nome de todos os clientes que começam com a letra A;
SELECT nomecliente FROM cliente
WHERE nomecliente LIKE 'A%';

-- Ex18 – Procurar o nome dos clientes que possuem “ana” no nome;
SELECT nomecliente FROM cliente
Where nomecliente LIKE '%ana%';

-- Ex19 - Recuperar o nome e o estado civil de todos os clientes da Região Sudeste
SELECT nomecliente,estadocivil FROM cliente
WHERE estado IN ('Espírito Santo','Rio de Janeiro','São Paulo','Minas Gerais');

-- Ex20 – Recupere o nome do Cliente juntamente com o seu estado civil por extenso;
SELECT nomecliente, estadocivil,
CASE
	WHEN estadocivil = 'D' THEN 'Divorciado'
	WHEN estadocivil = 'V' THEN 'Viúvo'
	WHEN estadocivil = 'C' THEN 'Casado'
	WHEN estadocivil = 'S' THEN 'Solteiro'
END
FROM cliente;

--Ex21 – Recupere o nome do produto e o nome da sua marca;
SELECT pdt.nomeproduto, marca.nomemarca
FROM produto AS pdt, marca
WHERE pdt.idmarca = marca.idmarca;

--Ex22 – Recupere o nome do cliente e o nome do produto que ele comprou
SELECT cli.nomecliente, pdt.nomeproduto
FROM cliente AS cli, produto AS pdt, compras
WHERE compras.idcliente = cli.idcliente AND compras.idproduto = pdt.idproduto;

--Ex23 – Recupere o nome do cliente, seu estado, além do nome da loja e do estado em que a compra foi realizada.
-- O resultado deve levar em consideração apenas compras acima de 40 produtos.
SELECT cli.nomecliente, cli.estado, lj.nomeloja, lj.uf
FROM cliente as cli, loja AS lj, compras as cmp
WHERE cmp.qtd > 40
	AND cmp.idcliente = cli.idcliente AND cmp.idloja = lj.idloja;
    
--Ex24 – Recupere o nome do produto e o preço do produto, e o nome da sua marca
SELECT prod.nomeproduto, prod.preco, marca.nomemarca
FROM produto AS prod JOIN marca
ON prod.idmarca = marca.idmarca;

--EX25 – Recupere o nome da marca, a data da venda e a quantidade vendida
SELECT marca.nomemarca, compras.dtcompra, compras.qtd
FROM compras
	JOIN produto
		ON compras.idproduto = produto.idproduto
	JOIN marca
		ON produto.idmarca = marca.idmarca;
    
--EX26 – Recupere o nome do cliente, o nome do produto e a quantidade comprada por ele
SELECT cli.nomecliente, prd.nomeproduto, cpr.qtd
FROM compras AS cpr
	JOIN cliente AS cli
    	ON cpr.idcliente = cli.idcliente
  	JOIN produto AS prd
      	ON cpr.idproduto = prd.idproduto;
        
--Novas tuplas de "cliente"
INSERT INTO cliente
(idcliente,nomecliente,genero,estadocivil,dtnascimento,cidade,estado)
VALUES
(501, 'Alba', 'F', 'V', '1982/10/25', 'Duque de Caxias','Rio de Janeiro'),
(502, 'Solimar', 'F', 'V', '1972/11/25', 'Niterói','Rio de Janeiro'),
(503, 'Pablo', 'M', 'C', '1999/03/01', 'Nova Iguaçu','Rio de Janeiro'),
(504, 'Solange', 'F', 'S', '1979/06/05', 'Salvador', 'Bahia'),
(505, 'Mário', 'M', 'S', '1985/07/22', 'Bragança Paulista', 'São Paulo');

--EX27 – Recupere o nome de todos os clientes e o id da compra, mesmo aqueles que não realizaram nenhuma compra.
SELECT cli.nomecliente, cpr.idcompra
FROM cliente AS cli
	LEFT JOIN compras AS cpr
   	ON cpr.idcliente = cli.idcliente;

--Novas tuplas de "marca"
INSERT INTO marca (idmarca,nomemarca)
VALUES
(6,'Delícia de Prato'),
(7,'Pajé');


--EX28 – Recupere, usando o Right Join, o nome de todas as marcas, e os seus produtos,
-- mesmo as marcas que não possuem produto.
SELECT marca.nomemarca, produto.nomeproduto
FROM produto
	RIGHT JOIN marca ON produto.idmarca = marca.idmarca;

--EX29 – Recupere o nome dos clientes e das marcas, mesmo aqueles que não possuem correspondência
SELECT cli.nomecliente, mrc.nomemarca
FROM cliente AS cli
	FULL OUTER JOIN marca AS mrc
    ON cli.nomecliente = mrc.nomemarca;