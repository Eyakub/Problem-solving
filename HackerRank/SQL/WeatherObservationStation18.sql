select ROUND(
    ABS(MAX(LAT_N) - MIN(LAT_N)) 
    +
    ABS(MAX(LONG_W) - MIN(LONG_W)), 4
) from STATION;