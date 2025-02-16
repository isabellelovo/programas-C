--CRIAÇÃO DAS TABELAS--
 --1) Implemente e popule o banco de dados, criando as tabelas e suas devidas restrições
CREATE TABLE cliente(
   cod_cliente INTEGER PRIMARY KEY,
   dt_nascimento DATE,
   estadocivil CHAR(1),
   nome VARCHAR(50) NOT NULL,
   cidade VARCHAR(30),
   estado VARCHAR(30),
   genero VARCHAR(10)
  );
 
 CREATE TABLE funcionario(
   cod_funcionario INTEGER PRIMARY KEY,
   estadocivil CHAR(1),
   nome VARCHAR(50) NOT NULL,
   cidade VARCHAR(30),
   estado VARCHAR(30),
   genero VARCHAR(10),
   cargo VARCHAR(20)
);

CREATE TABLE compra(
  cod_compra INTEGER PRIMARY key,
  hora INTEGER,
  data DATE,
  cod_cliente INTEGER,
  cod_funcionario INTEGER,
  FOREIGN KEY(cod_cliente) references cliente(cod_cliente),
  FOREIGN KEY(cod_funcionario) REFERENCES funcionario(cod_funcionario)
  );
 
 CREATE table fabricante(
   cod_fabricante INTEGER primary key,
   nome VARCHAR(50) NOT NULL,
   site VARCHAR(100),
   email VARCHAR(50)
   );
   
  CREATE TABLE produto(
    cod_produto INTEGER PRIMARY KEY,
    preco REAL,
    descricao VARCHAR(100),
    nome VARCHAR(50) not NULL,
    cod_fabricante INTEGER,
    FOREIGN KEY (cod_fabricante) REFERENCES fabricante(cod_fabricante)
    );
   
    create table venda(
      cod_produto INTEGER,
      cod_compra INTEGER,
      qtd INTEGER,
      valor_desconto REAL,
   PRIMARY KEY (cod_compra, cod_produto),
      FOREIGN KEY (cod_compra) REFERENCES compra(cod_compra),
      FOREIGN KEY (cod_produto) REFERENCES produto(cod_produto)
      );
     
       --DADOS ADICIONADOS
 
 -- Inserir dados na tabela "cliente"
 
INSERT INTO cliente (cod_cliente, dt_nascimento, estadocivil, nome, cidade, estado, genero)
VALUES
(1, '1985-03-15', 'S', 'Carlos Silva', 'São Paulo', 'São Paulo', 'Masculino'),
(2, '1990-07-22', 'C', 'Ana Souza', 'Rio de Janeiro', 'Rio de Janeiro', 'Feminino'),
(3, '1982-11-30', 'S', 'José Pereira', 'Belo Horizonte', 'Minas Gerais', 'Masculino'),
(4, '2006-06-21', 'S', 'Isabelle Pinheiro', 'Porto Alegre', 'Rio Grande do Sul', 'Feminino'),
(5, '2004-02-14', 'V', 'Laura Mota', 'Fortaleza', 'Ceará', 'Feminino'),
(6, '2005-08-29','C', 'Anna Clara Berce', 'São Luis', 'Maranhão', 'Feminino');

-- Inserir dados na tabela "funcionario"
INSERT INTO funcionario (cod_funcionario, estadocivil, nome, cidade, estado, genero, cargo)
VALUES
(1, 'S', 'Marcelo Oliveira', 'São Paulo', 'SP', 'Masculino', 'Vendedor'),
(2, 'C', 'Fernanda Rocha', 'Rio de Janeiro', 'RJ', 'Feminino', 'Gerente de Vendas'),
(3, 'S', 'Ricardo Alves', 'Curitiba', 'PR', 'Masculino', 'Assistente Comercial'),
(4, 'S', 'Patrícia Santos', 'Salvador', 'BA', 'Feminino', 'Atendente');

-- Inserir dados na tabela "compra"
INSERT INTO compra (cod_compra, hora, data, cod_cliente, cod_funcionario)
VALUES

(1, 14, '2024-11-01', 1, 1),
(2, 16, '2024-11-02', 2, 2),
(3, 10, '2024-11-03', 3, 3),
(4, 12, '2024-11-04', 4, 4),
(5, 10, '2025-11-04', 4, 4),
(6, 15, '2026-12-14', 5, 3);

-- Inserir dados na tabela "fabricante"
INSERT INTO fabricante (cod_fabricante, nome, site, email)
VALUES
(1, 'Indústria de Alimentos S.A.', 'www.industriaalimentos.com.br', 'contato@industriaalimentos.com.br'),
(2, 'TecnoElectro', 'www.tecnoelectro.com.br', 'vendas@tecnoelectro.com.br'),
(3, 'Móveis & Decoração Ltda', 'www.moveisdecoracao.com.br', 'atendimento@moveisdecoracao.com.br');

-- Inserir dados na tabela "produto"
INSERT INTO produto (cod_produto, preco, descricao, nome, cod_fabricante)
VALUES

(1, 200.50, 'Produto de linha branca, geladeira', 'Geladeira Frost Free', 1),
(2, 150.00, 'Produto eletrônico, smartphone', 'Smartphone X1', 2),
(3, 799.99, 'Conjunto de sofás para sala de estar', 'Sofá Comfort', 3),
(4, 45.99, 'Produtos de cozinha, utensílios', 'Panela Elétrica', 1),
(5, 300.00, 'Chaveiro colorido da Hello Kitty', 'Chaveiro', 2);

-- Inserir dados na tabela "venda"
INSERT INTO venda (cod_produto, cod_compra, qtd, valor_desconto)
VALUES
(1, 1, 1, 50.00),  -- Geladeira Frost Free, Compra 1
(2, 2, 2, 30.00),  -- Smartphone X1, Compra 2
(3, 3, 1, 100.00), -- Sofá Comfort, Compra 3
(4, 4, 3, 10.00);  -- Panela Elétrica, Compra 4

 --Questões2 --
 
--a) Recupere o nome, a cidade e o estado dos clientes da região Nordeste
SELECT nome, cidade, estado
fROM cliente
WHERE estado in ('Maranhão', 'Pernambuco', 'Piauí', 'Ceará',
                  'Bahia', 'Alagoas','Rio Grande do Norte', 'Sergipe', 'Paraíba');

--b) Recupere o nome dos clientes que possuem “Silva” no nome
SELECT nome
FROM cliente
WHERE nome LIKE '%Silva%';

--c) Recupere o nome dos clientes que não realizaram compras no ano de 2024
SELECT cli.nome, comp.data
FROM cliente AS cli
join compra AS comp
on cli.cod_cliente = comp.cod_cliente
where EXTRACT(year FROM comp.data) != '2024';

--d) Recupere o nome do cliente, o nome do funcionário e o produto que ele comprou
SELECT cli.nome AS nomecliente, func.nome AS nomefuncionario, prod.nome AS nomeproduto
FROM cliente AS cli
JOIN compra AS comp ON comp.cod_cliente = cli.cod_cliente
JOIN funcionario AS func ON comp.cod_funcionario = func.cod_funcionario
JOIN venda AS ven ON ven.cod_compra = comp.cod_compra
JOIN produto AS prod ON ven.cod_produto = prod.cod_produto;

--e) Recupere o total de funcionários por cidade cuja a quantidade de compras seja maior que 5
SELECT func.cidade, COUNT(DISTINCT func.cod_funcionario) AS qtd_funcionarios
FROM funcionario AS func
JOIN compra AS comp ON func.cod_funcionario = comp.cod_funcionario
GROUP BY func.cidade
HAVING COUNT(comp.cod_compra) > 5;

--f) Recupere os 5 clientes que realizaram mais compras
SELECT cliente.nome, COUNT(*) compras
FROM compra
JOIN cliente on compra.cod_cliente = cliente.cod_cliente
group by cliente.nome
LIMIT 5;
 
 --g) Recupere o total de produtos por fabricante
 
SELECT fabricante.nome, COUNT(*) produtos
FROM produto
JOIN fabricante on produto.cod_fabricante = fabricante.cod_fabricante
GROUP by fabricante.nome;
 
 --h)Recupere a lista de produtos que nunca foram vendidos
SELECT produto.nome
FROM venda
full OUTER JOIN produto
ON venda.cod_produto = produto.cod_produto
WHERE venda.cod_produto IS NULL;
 
 --i) Recupere a quantidade de clientes sem cidade cadastrada
SELECT COUNT(*) AS qtd_sem_cidade
FROM cliente
WHERE cidade = ' ';

 --j) Recupere o valor total de descontos aplicados em produtos cujo o preço é acima do valor médio dos produtos
SELECT SUM(v.valor_desconto) AS total_descontos
FROM venda AS v
JOIN produto AS p ON v.cod_produto = p.cod_produto
WHERE p.preco > (
    ((SELECT SUM(valor_desconto) FROM venda) / (SELECT COUNT(*) FROM produto))
);