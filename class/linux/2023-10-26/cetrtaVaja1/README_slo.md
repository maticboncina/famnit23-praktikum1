# Skripta za Varnostne Kopije (SLO)

## Cilj:
- Napiši Bash skripto, ki ustvari varnostno kopijo določene mape v obliki zip daoteke in premakne zip datoteko v mapo namenjeno za varnostne kopije.

## Zahteve:

### Vhod Skripte:
- Skripta naj sprejme en argument: pot do izvorne mape, ki jo želiš varnostno kopirati. Če argument ni podan, naj skripta privzeto varnostno kopira trenutno mapo (".").

### Obvladovanje Napak:
- Če postopek zgoščevanja spodleti, izpiši sporočilo "Arhiviranje ni uspelo..." in izstopi s statusno kodo 1.
- Če postopek premikanja spodleti, izpiši sporočilo "Premikanje varnostne kopije ni uspelo" in izstopi s statusno kodo 1.

