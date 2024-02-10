.ONESHELL: 
all: aufgabe5 run
aufgabe5:
		bsc -u -sim -g mkAufgabe5Tb Aufgabe5Tb.bsv
		bsc -sim -e mkAufgabe5Tb -o aufgabe5
run: aufgabe5
		./aufgabe5	
