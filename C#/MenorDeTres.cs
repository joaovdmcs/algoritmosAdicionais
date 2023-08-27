using System;
using System.Globalization;

public class MenorDeTres{
	
	static void BubbleSort(int[] a){
		
		int temp;
		
		for(int i = 0; i < a.Length; i++){
			for(int j = 0; j < a.Length-1; j++){
				if(a[i] > a[j+1]){
					temp = a[i];
					a[i] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		
	}
	
	
	static void Main(string[] args){
		CultureInfo CI = CultureInfo.InvariantCulture;
		
		int[] valores = new int[3];
		
		Console.Write("Primeiro valor: ");
		valores[0] = int.Parse(Console.ReadLine());
		Console.Write("Segundo valor: ");
		valores[1] = int.Parse(Console.ReadLine());
		Console.Write("Terceiro valor: ");
		valores[2] = int.Parse(Console.ReadLine());
		
		BubbleSort(valores);
		
		Console.WriteLine("MENOR = " + valores[0]);
		
		
		
	}
}