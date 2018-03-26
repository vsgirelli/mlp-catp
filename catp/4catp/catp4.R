library(magrittr);
library(readr);
library(dplyr);

df <- read_csv("ondes3d_1_ligurian_64_grisou-5.nancy.grid5000.fr_counter.csv");

# 2 Contar quantas operações Operation são realizadas por iteração (Iteration).df;

df %>%
  # select by Iteration and Operation
  select(Iteration, Operation) %>%
  # group_by changes how other operations act on the data
  group_by(Iteration) %>%
  # n() number of rows of each group
  summarize(quant = n()) %>%
  group_by(quant) %>%
  summarize(med = mean(quant)) %>%
  select(quant);

# 3 Como o exercício anterior, mas por iteração (Iteration) e processo (Rank).

df %>%
  select(Iteration, Rank) %>%
  group_by(Iteration, Rank) %>%
  select(Rank, Iteration) %>%
  summarize(quant = n()) %>%
  group_by(quant) %>%
  summarize(med = mean(quant)) %>%
  select(quant);
