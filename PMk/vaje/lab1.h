// 15.3.2017
/** For more information, including instructions,
 *  check the "Documentation" folder.
 *
 *  Basic premise: a calculator that takes two complex numbers
 *  (as float)and outputs their sum, difference, product, and
 *  quotient.
 */

void lab1 () {
 	printf("Hello.\n");

	float Are, Aim;
	float Bre, Bim;

	printf("Enter first complex number:\n");
	scanf("%f%fi", &Are, &Aim);
	printf("Enter second complex number:\n");
	scanf("%f%fi", &Bre, &Bim);

	printf("Sum:            %g%+gi\n", Are+Bre, Aim+Bim);
	printf("Subtraction:    %g%+gi\n", Are-Bre, Aim-Bim);
	printf("Multiplication: %g%+gi\n", Are*Bre-Aim*Bim, Bim*Are+Aim*Bre);
	printf("Division:       %g%+gi\n", (Are*Bre+Aim*Bim)/(Bre*Bre+Bim*Bim), \
											(Bre*Aim-Bim*Are)/(Bre*Bre+Bim*Bim));
}
