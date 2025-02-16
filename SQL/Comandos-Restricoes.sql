    ------------///INICIAL///------------


-- CRIA UM DOMÍNIO
CREATE DOMAIN dom_sexo AS char(1) -- cria dominio, define nome, define tamanho de 1 char
NOT NULL -- não pode ser vazio
CHECK (VALUE IN ('M', 'F', 'O')); -- vai checar se o valor é M(masc), F(fem) ou O

-- CRIA UMA TABELA
CREATE TABLE departamento( -- tabela departamento
coddepto INTEGER PRIMARY KEY,
nomedepto VARCHAR(50) NOT NULL  -- restrição: não pode ser nulo
);

-- CRIA UMA TABELA
CREATE TABLE funcionario ( --tabela funcionario
matricula INTEGER PRIMARY KEY, -- restrição: chave primaria
nome VARCHAR(50) NOT NULL,
sexo dom_sexo, -- referencia o que já foi definido no domínio
nascimento DATE CHECK(nascimento < '2006-01-01'), -- verifica a data de nascimento
salario REAL CHECK(salario>=1412),
coddepto INTEGER,
FOREIGN KEY(coddepto) REFERENCES departamento(coddepto)
);


    ------------///TESTANDO AS 5 RESTRIÇÕES///------------

-- PREENCHE CAMPOS DA TABELA "departamento"
INSERT INTO departamento(coddepto, nomedepto)
VALUES
(1,'RH'),
(2, 'Contabilidade'),
(3, 'TI');


SELECT * FROM departamento

-- Exercício 01 - TESTAR RESTRIÇÃO DE CHAVE
INSERT INTO departamento (coddepto, nomedepto)
VALUES
(2,'Financeiro'); -- viola a restrição de chave (2 já pertence a "Contabilidade")


-- Exercício 02 - TESTAR RESTRIÇÃO DE ENTIDADE
INSERT INTO departamento(coddepto, nomedepto) -- preenche campos da tabela indicada
VALUES
(null, 'Financeiro'); --viola a restrição de entidade (valor vazio para ch. primaria)


-- Exercicio 03 - PREENCHE CAMPOS DA TABELA "funcionario"
INSERT INTO funcionario(matricula, nome, sexo, nascimento, salario, coddepto)
VALUES
(1, 'Ana', 'F', '1976-05-01', 5000, 3);
SELECT * FROM funcionario;


-- Exercício 04 - TESTAR RESTRIÇÃO DE DOMÍNIO
INSERT INTO funcionario(matricula, nome, sexo, nascimento, salario, coddepto)
VALUES
(2, 'Ana', 'T', '1976-05-01', 5000, 3);
--viola a restrição de dominio ("T" não é um dado valido pra "sexo")


-- Exercício 05 - TESTAR RESTRIÇÃO DE INTEGRIDADE REFERENCIAL
INSERT INTO funcionario(matricula, nome, sexo, nascimento, salario, coddepto)
VALUES
(1, 'Ana', 'F', '1976-05-01', 5000, 5);
-- viola a restrição de integridade referencial / chave estrangeira
-- (código de depto "5" não existe)


-- Exercício 06 - TESTAR RESTRIÇÃO SEMÂNTICA
INSERT INTO funcionario(matricula, nome, sexo, nascimento, salario, coddepto)
VALUES
(3, 'Ana', 'F', '1976-05-01', 1000, 3);
-- viola a restrição semântica (feriu a regra de negocio para "salario")

