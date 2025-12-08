**comment**: `#`

**vector**
```r
vec <- c(x, y, z, ...)
```


**Binomial**
* Density of binomial distribution
```r
dbinom(x, trial_times, success_probability)
```

**`plot.new()`**
* New page

**`plot.window(xlim = c(0, 1), ylim = c(0, 1))`**
* Set area as `[0,1]`

**plot**
* output on pdf
```r
plot(x, y,                    # Data
     type = "p",              # p=point(Default), l= line, b= both
     col = "black",           # color
     pch = 1,                 # shape of point
     lwd = 1,                 # width
     lty = 1,                 # linw type
     main = "Title",          
     xlab = "X label",        
     ylab = "Y label",        
     xlim = c(min, max),      
     ylim = c(min, max))      

```
* lim = limit

1. `pch`
   * 1 - ○
2. `lty`(line type)
    * 1 ——
    * 2 - - - -
    * 3 . . . .
    * 4 . - . - . -

**barplot**
* output on pdf
```r
barplot(height, names.arg, main, xlab, ylab, col, ylim, border...)
```
* names.arg = label for each bar
* border = 枠線の色, can be `NA`

**grid**
```r
# Default n? = NULL(Auto)
# n = the number of grid
grid(nx = NA, ny = NULL, n) 
```

**color**
```r
# name
col = "steelblue"
col = "red"
col = "lightblue"

# hexadecimal
col = "#3b82f6"
col = "#FF5733"

col = c("red", "blue", "green", "blue", "red")
```

**PDF**
```R
pdf("file_path", width = n, height = 8.5)
# Inch
# Letter 11, 8.5
# A4 8.27, 11.69
dev.off()  # Close PDF
```

```R
plot(1:10)
```


**par**
```r
par(mfrow = c(1, 2), mar = c(5, 5, 4, 2))
```
1. multiple figures by row
```r
# default
par(mfrow = c(1, 1)) # Column, Row 
```

2. margin

```r
# default
# under, left, top, right
mar = c(5.1, 4.1, 4.1, 2.1)
```


**abline**
* add line
```r
abline(v = mean_x, col = "red", lty = 2) 
# v: vertical, h: horizontal
# a,b: y = ax + b
```

**`table()`**
```r
data <- c(3, 5, 7, 3, 5, 8, 9, 3, 5, 7, 8, 9, 3, 5, 7, 8, 9, 5, 7, 8)
table(data)

# result:
# data
#  3  5  7  8  9  # unique value (can be extracted with `as.numeric(names(table))`)
#  4  5  4  4  3  # freq(can be extracted with as.vector(table) )
```


**cat, text()**
* `cat(x,y,z,..)`(concatenate with space): only on console
* `text(x, y, "str", option)`: on pdf


### Arithmatic

**`a:b`**
* a, a+1, ...,b

**`rep(x,f)`**
```r
x <- c(5, 7, 9)
f <- c(2, 3, 1)
rep(x, f)
# result: 5, 5, 7, 7, 7, 9
```
**sum()**
```r
sum(c(1, 2, 3, 4, 5)) # 15
```

**`cumsum(vec)`**
* Cumulative Sum

**`mean(vec)`**
**`median(rep(x, f))`**

**round(value, precision)**

**`x <- as.numeric(names(table))`**
* get unique data

