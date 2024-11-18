CREATE DATABASE aulatrigger;
USE aulatrigger;

CREATE TABLE conta(
	numero INT primary key,
    total FLOAT
);

DELIMITER $$
CREATE TRIGGER update_check BEFORE UPDATE ON conta
FOR EACH ROW 
BEGIN 
	IF NEW.total < 0 THEN
    SET NEW.total = 0;
    ELSEIF NEW.total > 100 THEN
    SET NEW.total = 100;
    END IF;
END; $$
DELIMITER ;

UPDATE conta SET total = 200 WHERE numero = 2;