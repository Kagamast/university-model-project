all:
	@echo compiling...
	@g++ main.cpp Adress.cpp Faculty.cpp Division.cpp Person.cpp Employee.cpp Student.cpp Subject.cpp University.cpp Rectorate.cpp -o res.out
	@echo compilation finished, executing file:

	@echo
	@echo

	@./res.out