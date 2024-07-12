fiabilitate <- c(0.63, 0.69, 0.72, 0.77, 0.83, 0.87, 0.95, 0.97)
fiabilitate_sistem <- prod(fiabilitate)

prob_nefunctionare_sistem <- 1 - fiabilitate_sistem
cat("Probabilitatea de nefunctionare a sistemului este: ", prob_nefunctionare_sistem)
fiabilitate_parciala <- rep(1, length(fiabilitate))
for (i in 1:length(fiabilitate)) {
  fiabilitate_parciala[i] <- prod(fiabilitate[1:i])
  cat("Fiabilitatea sistemului pentru primele ", i, " componente este: ", fiabilitate_parciala[i], "\n")
}
prob_nefunctionare_parciala <- rep(1, length(fiabilitate))
for (i in 1:length(fiabilitate)) {
  prob_nefunctionare_parciala[i] <- 1 - fiabilitate_parciala[i]
  cat("Probabilitatea de nefunctionare a sistemului pentru primele ", i, " componente este: ", prob_nefunctionare_parciala[i], "\n")
}

