select * from pizza_sales

select sum(total_price) as total_revenue from pizza_sales

select sum(total_price) / count(distinct order_id) as avg_order_value from pizza_sales

select sum(quantity) as toal_pizza_sold from pizza_sales

select count(distinct order_id) as total_orders from pizza_sales

select cast(cast(sum(quantity) as decimal(10,2)) / cast(count(distinct order_id) as decimal(10,2)) as decimal(10,2)) as avg_pizza_per_order from pizza_sales


select datename(dw, order_date) as order_day, count(distinct order_id) as total_orders from pizza_sales group by datename(dw, order_date)

select datename(month, order_date) as month_name, count(distinct order_id) as total_orders from pizza_sales group by datename(month, order_date) order by total_orders desc

select pizza_size, cast(sum(total_price) as decimal(10,2)) as total_sales, cast(sum(total_price) * 100 / (select sum(total_price) from pizza_sales) as decimal(10,2)) as pct from pizza_sales group by pizza_size order by pct desc

select top 5 pizza_name, sum(total_price) as total_revenue from pizza_sales group by pizza_name order by total_revenue desc

select top 5 pizza_name, sum(total_price) as total_revenue from pizza_sales group by pizza_name order by total_revenue asc

select top 5 pizza_name, count(distinct order_id) as total_orders from pizza_sales group by pizza_name order by total_orders desc

select top 5 pizza_name, count(distinct order_id) as total_orders from pizza_sales group by pizza_name order by total_orders asc