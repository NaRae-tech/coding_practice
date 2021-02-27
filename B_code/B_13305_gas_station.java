package baekjoon;

import java.io.BufferedReader;
import java.io.InputStreamReader; 
import java.io.IOException;
import java.util.StringTokenizer;

public class gas_station {
	public static void main(String[] args) {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		String s ="";
		try {s=bf.readLine();}catch(IOException e) {}
		int N = Integer.parseInt(s);
		
		//���� station������ �Ÿ� 
		long distance[] = new long[N];
		try {s=bf.readLine();}catch(IOException e) {}
		StringTokenizer st = new StringTokenizer(s);
		for(int i =0;i<N-1;i++) {distance[i] = Integer.parseInt(st.nextToken());}
		distance[N-1] = 0;
		
		//station�� ���
		long cost[] = new long[N];
		try {s=bf.readLine();}catch(IOException e) {}
		StringTokenizer st2 = new StringTokenizer(s);
		for(int i =0;i<N;i++) {cost[i] = Integer.parseInt(st2.nextToken());}
		
		//���� ������ station�� ���
		long minimum = cost[0];
		long result = 0;
		for(int i =0;i<N-1;i++) {
			if(minimum>=cost[i]) {
				minimum = cost[i];
			}
			result+=(minimum*distance[i]);
		}
		System.out.println(result);
	}
}
