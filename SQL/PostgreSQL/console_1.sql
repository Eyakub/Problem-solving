-- review based on condition using CASE
SELECT
    product_id,
    reviewer_user_id,
    CASE rating
        WHEN 1 THEN 'Poor'
        WHEN 2 THEN 'Fair'
        WHEN 3 THEN 'Good'
        WHEN 4 THEN 'Very Good'
        WHEN 5 THEN 'Excellent'
    END as rating
FROM review_rating_reviewrating;


-- replace NULL values with specific values
SELECT email,
        CASE WHEN name is NULL THEN 'Zero'
        END AS user_name
FROM account_user AS user_name;


-- filter range of value
SELECT name, price
FROM product_product
WHERE price BETWEEN 20 AND 25;


-- filter out data by comparing values
select name, price, created_at from product_product
where price > 100 AND created_at > '2020-02-02';


-- Finding rows based on a list of values
-- Find the name of products that has these 3 listPrice values: 100, 120, 130
select name,
       price, local_price
from product_product
WHERE price IN (100, 200, 300);


-- Finding rows having a specific string
-- start with V
SELECT * from product_product
WHERE name like 'V%';


-- Filtering rows having no data value in the column
SELECT * from product_product
WHERE available_on IS NOT NULL;


-- Filtering rows based on some values in a sub-query
SELECT variant_id, product_name, product_sku, quantity FROM order_orderline
WHERE unit_price_net > 80 AND variant_id IS NOT NULL;

SELECT *
FROM product_protui ductvariant
WHERE id = ANY(
    SELECT variant_id FROM order_orderline
    WHERE unit_price_net > 80 and price_override IS NULL
);


-- Return values by converting them into Upper or Lower case
SELECT UPPER(name) as Name, LOWER(description) as Desc
FROM product_product;


-- Return values by extracting specific characters
SELECT name, LEFT(name, 2) as productprice
FROM product_product
WHERE name like 'T%';


-- Select records that has matching value in two tables
SELECT A.id, B.name, A.weight from product_productvariant as A
INNER JOIN product_product as B
ON A.id = B.id
WHERE A.weight > 2;


-- select all records from first table and
-- only the matching records from second table
SELECT A.id, A.name, B.weight, B.local_price_override from product_product AS A
LEFT JOIN product_productvariant as B
ON a.id = B.id
WHERE B.weight > 2;


-- select all records from second table and only
-- the matching records from first table
SELECT A.id, A.name, B.weight, B.local_price_override from product_product AS A
RIGHT JOIN product_productvariant as B
ON a.id = B.id
WHERE B.weight > 2;


-- select all records from two tables when there
-- is a match between them or not
SELECT A.id, A.name, A.price from product_product AS A
FULL JOIN product_productvariant as B
ON A.id = B.id
WHERE B.weight > 2;


-- return the number of items found in a result set
select distinct COUNT(product_id) from product_productvariant;\


-- compute the total count
SELECT SUM(discount_amount) as discount_amount from order_order
WHERE created between  '2019-01-01' and '2020-02-01';


-- compute the average value
SELECT AVG(discount_amount) as discount_amount from order_order
WHERE created between  '2019-01-01' and '2020-02-01';


-- compute the lowest value
SELECT MIN(discount_amount) as discount_amount from order_order
WHERE created between  '2019-01-01' and '2020-02-01';


-- compute the highest value
SELECT MAX(discount_amount) as discount_amount from order_order
WHERE created between  '2019-01-01' and '2020-02-01';


-- combine values from two columns into one column
-- concat with first left two name with price
select id, CONCAT(LEFT(name, 2), '-', price)
FROM product_product;


-- create a calculated field
-- find the amount due to the rejected quantity
select productID,
       UnitPrice,
       OrderQty,
       LineTotal,
       (UnitPrice * RejectedQty) AS LossAmount
FROM order_order;


-- arrange rows in group