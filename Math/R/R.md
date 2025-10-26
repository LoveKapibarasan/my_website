# R
* `.R`
* interpreter
* [URL](https://www.r-project.org/)
* [Github](https://github.com/wch/r-source)

e.g. Keras

**Execute**
```bash
Rscript "$file".R
```
or interactive mode
```bash
R
> source("file.R")
> q()  # exit 
```


**Import**
```r
install.packages("package_name")
library(ggplot2)
library(dplyr)
# or
package_name::function()
# Text data
data <- readLines("file")
```

**RData**
```r
# ===== save =====
save(probability_space, file = "prob_space.RData")

# ===== load =====
load("prob_space.RData")
```

**Excel**
```r
library(readxl)
library(writexl)

# ===== import =====
df <- read_excel("file.xlsx", sheet = 1)
df <- read_excel("file.xlsx", sheet = "sheet_name")

# ===== export =====
write_xlsx(df, "output.xlsx")
write_xlsx(list(sheet1 = df1, sheet2 = df2), "output.xlsx")
```
