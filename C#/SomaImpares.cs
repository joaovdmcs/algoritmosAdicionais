using System;
using System.Globalization;

public class SomaImpares{
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
		
		int[] v = new int[2];
		Console.WriteLine("Digite dois numeros:");
		
		v[0] = int.Parse(Console.ReadLine());
		v[1] = int.Parse(Console.ReadLine());
		BubbleSort(v);
		
		int soma = 0;
		for(int i = v[0]+1; i < v[1]; i++){
			if(i%2!=0) soma += i;
		}
		
		Console.WriteLine("SOMA DOS IMPARES = " + soma);
		
		
		
	}
}