using System;
using System.Globalization;

public class SomaVetor{
	static void Main(string[] args){
		CultureInfo CI = CultureInfo.InvariantCulture;
		
		int n;
		Console.Write("Quantos numeros voce vai digitar? ");
		n = int.Parse(Console.ReadLine());
		
		double[] v = new double[n];
		for(int i = 0; i < n; i++) {
			Console.Write("Digite um numero: ");
			v[i] = int.Parse(Console.ReadLine());
		}
		
		Console.WriteLine();
		Console.Write("VALORES = ");
		double soma = 0;
		for(int j = 0; j < n; j++){
			Console.Write(v[j].ToString("F1",CI) + " ");
			soma += v[j];
		}
		Console.WriteLine();
		Console.WriteLine("SOMA = " + soma.ToString("F2", CI));
		Console.WriteLine("Media = " + (soma/n).ToString("F2", CI));
		
		
	}
}