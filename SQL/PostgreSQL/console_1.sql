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
FROM product_productvariant
WHERE id = ANY(
    SELECT variant_id FROM order_orderline
    WHERE unit_price_net > 80 and price_override IS NULL
);


-- Return values by converting them into Upper or Lower case
SELECT UPPER(name) as Name, LOWER(description) as Desc
FROM product_product;


-- Return values by extracting specific characters
