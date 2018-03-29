library(magrittr);
library(readr);
library(dplyr);
library(ggplot2);

df <- read_csv("ondes3d_1_ligurian_64_grisou-5.nancy.grid5000.fr_counter.csv");

# 2 Contar quantas operações Operation são realizadas por iteração (Iteration).df;

df %>%
  # select by Iteration and Operation
  select(Iteration, Operation) %>%
  # group_by changes how other operations act on the data
  group_by(Iteration) %>%
  # n() number of rows of each group
  summarize(quant = n()) %>%
  # como é a mesma quantidade, quero mostrar um único resultado ao final
  # que representa a quantidade pra todos os casos
  group_by(quant) %>%
  unique();

# 3 Como o exercício anterior, mas por iteração (Iteration) e processo (Rank).
# Quantas iterações tem por processo

df %>%
  select(Iteration, Rank) %>%
  group_by(Rank) %>%
  summarize(quant = n()) %>%
  group_by(quant) %>%
  summarize(med = mean(quant)) %>%
  select(med);

# 4 Calcular o tempo médio da operação Stress para o processo 21 para cada iteração (Iteration)
# Utilize a função mean para calcular a média.

df %>%
  filter(Operation == 'Stress', Rank == 21) %>%
  select(Operation, Rank, Iteration, Time) %>%
  group_by(Iteration) %>%
  summarize(med = mean(Time)) %>%
  ggplot(aes(x=Iteration, y=med)) + geom_point();

# 5 Calcule o IPC (Instruções Por Ciclo = PAPI_TOT_CYC/PAPI_TOT_INS) por número de iteração
# e por tipo de operação para cada processo, apresente somente os resultados da iteração 110.

df %>%
  mutate(IPC = PAPI_TOT_CYC/PAPI_TOT_INS) %>%
  select(Rank, Iteration, Operation, IPC) %>%
  group_by(Operation, Iteration, Rank) %>%
  filter(Iteration == 110);

# 6 Liste as observações quando o IPC for menor que o valor médio.
# considerei que era sobre o IPC geral, e não apenas sobre a iteração 110.
df %>%
  mutate(IPC = PAPI_TOT_CYC/PAPI_TOT_INS) %>%
  filter(IPC > mean(IPC));
