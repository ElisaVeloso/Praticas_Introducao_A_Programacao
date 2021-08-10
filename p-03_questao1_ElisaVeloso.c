//Elisa Alves Veloso
//20.2.4006
//Turma 31

#include <stdio.h>

void grausParaRadianos(double);
void RadianosParaGraus(double);
void CelsiusParaFahrenheit(double);
void FahrenheitParaCelsius(double);
void KelvinParaCelsius(double);
void CelsiusParaKelvin(double);
void KelvinParaFahrenheit(double);
void FarenheitParaKelvin(double);
void printMenu();
void printMenuAngulo();
void printMenuTemp();

int main()
{
  printMenu();

  return 0;
}

void printMenu()
{
  int grandeza;
  printf(
      "### CONVERSOR DE UNIDADES ###\n\n"
      "1) Angulo\n"
      "2) Temperatura\n\n"
      "Digite uma opcao\n");
  scanf("%d", &grandeza);

  switch (grandeza)
  {
  case 1:
    printMenuAngulo();
    break;

  case 2:
    printMenuTemp();
    break;

  default:
    printf("\nERRO: grandeza invalida");
  }
}

void printMenuAngulo()
{
  double graus, radianos;
  int unidadeAngulo;
  printf(
      "Qual eh a unidade de origem?\n\n"
      "1) Graus\n"
      "2) Radianos\n\n");
  scanf("%d", &unidadeAngulo);

  switch (unidadeAngulo)
  {
  case 1:
    printf("Digite o valor em Graus:\n");
    scanf("%lf", &graus);
    grausParaRadianos(graus);
    break;

  case 2:
    printf("Digite o valor em Radianos:\n");
    scanf("%lf", &radianos);
    radianosParaGraus(radianos);

    break;

  default:
    printf("\nERRO: unidade invalida\n");
    break;
  }
}

void printMenuTemp()
{
  double celsius, fahrenheit, kelvin;
  int unidadeTemp;
  printf(
      "Qual eh a unidade de origem?\n\n"
      "1) Celsius\n"
      "2) Fahrenheit\n"
      "3) Kelvin\n\n");
  scanf("%d", &unidadeTemp);

  switch (unidadeTemp)
  {
  case 1:
  {
    printf("Digite o valor em Celsius:\n");
    scanf("%lf", &celsius);
    celsiusParaFahrenheit(celsius);
    celsiusParaKelvin(celsius);
    break;
  }

  case 2:
  {
    printf("Digite o valor em Fahrenheit:\n");
    scanf("%lf", &fahrenheit);
    fahrenheitParaCelsius(fahrenheit);
    fahrenheitParaKelvin(fahrenheit);
    break;
  }

  case 3:
  {
    printf("Digite o valor em Kelvin:\n");
    scanf("%lf", &kelvin);
    kelvinParaCelsius(kelvin);
    kelvinParaFahrenheit(kelvin);
    break;
  }

  default:
    printf("\nERRO: unidade invalida\n");
    break;
  }
}

void grausParaRadianos(double graus)
{
  const double PI = 3.141593;

  double valorRad = graus * PI / 180.0;

  printf("Valor em radianos: %lf\n", valorRad);
}

void radianosParaGraus(double radianos)
{
  const double PI = 3.141593;

  double valorGraus = radianos * 180.0 / PI;

  printf("Valor em graus: %lf\n", valorGraus);
}

void fahrenheitParaCelsius(double fahrenheit)
{
  double valorCelsius = (fahrenheit - 32) * 5.0 / 9.0;

  printf("Valor em Celsius: %lf\n", valorCelsius);
}

void celsiusParaKelvin(double celsius)
{
  double valorKelvin = celsius + 273.15;

  printf("Valor em Kelvin: %lf\n", valorKelvin);
}

void celsiusParaFahrenheit(double celsius)
{
  double valorFahrenheit = (celsius * 9.0 / 5.0) + 32;

  printf("Valor em Fahrenheit: %lf\n", valorFahrenheit);
}

void fahrenheitParaKelvin(double fahrenheit)
{
  double valorKelvinDeFahrenheit = (((fahrenheit - 32) * 5.0 / 9.0) + 273.15);

  printf("Valor em Kelvin: %lf\n", valorKelvinDeFahrenheit);
}

void kelvinParaCelsius(double kelvin)
{
  double valorCelsiusDeKelvin = kelvin - 273.15;

  printf("Valor em Celsius: %lf\n", valorCelsiusDeKelvin);
}

void kelvinParaFahrenheit(double kelvin)
{
  double valorFahrenheitdeKelvin = (((kelvin - 273.15) * 9.0 / 5.0) + 32);

  printf("Valor em Fahrenheit: %lf\n", valorFahrenheitdeKelvin);
}