using System;
using System.Globalization;

class Retangulo {
	static void Main(string[] args){
		CultureInfo CI = CultureInfo.InvariantCulture;
		
		double baseR, altura;
		Console.Write("Base do retangulo: ");
		baseR = double.Parse(Console.ReadLine(),CI);
		Console.Write("Altura do retangulo: ");
		altura = double.Parse(Console.ReadLine(),CI);
		
		
		Console.WriteLine("AREA = " + (baseR*altura).ToString("F4",CI));
		Console.WriteLine("PERIMETRO = " + (2*(baseR+altura)).ToString("F4",CI));
		Console.WriteLine("DIAGONAL = " + (Math.Sqrt(baseR*baseR+altura*altura)).ToString("F4",CI));
		
	}
}