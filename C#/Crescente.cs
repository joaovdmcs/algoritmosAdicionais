using System;
using System.Globalization;

public class Crescente{
	static void Main(string[] args){
		
		int a,b;
		
		Console.WriteLine("Digite dois numeros: ");
		a = int.Parse(Console.ReadLine());
		b = int.Parse(Console.ReadLine());
		
		while(a!=b){
			if(a<b) Console.WriteLine("CRESCENTE!");
			else Console.WriteLine("DECRESCENTE!");
			
			Console.WriteLine("Digite mais dois numeros: ");
			a = int.Parse(Console.ReadLine());
			b = int.Parse(Console.ReadLine());
		}
		
		
	}
}