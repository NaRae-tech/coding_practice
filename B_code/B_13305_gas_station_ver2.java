package baekjoon;

import java.io.BufferedReader;
import java.io.InputStreamReader; 
import java.io.IOException;
import java.util.StringTokenizer;

public class gas_station_ver2 {
	public static void main(String[] args) {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		String s ="";
		try {s=bf.readLine();}catch(IOException e) {}
		int N = Integer.parseInt(s);
		
		//���� station������ �Ÿ� 
		long distance[] = new long[N-1];
		try {s=bf.readLine();}catch(IOException e) {}
		StringTokenizer st = new StringTokenizer(s);
		for(int i =0;i<N-1;i++) {distance[i] = Integer.parseInt(st.nextToken());}
		
		//station�� ���
		long cost[] = new long[N];
		try {s=bf.readLine();}catch(IOException e) {}
		StringTokenizer st2 = new StringTokenizer(s);
		for(int i =0;i<N;i++) {cost[i] = Integer.parseInt(st2.nextToken());}
		
		//���� ������ station�� ���
		long minimum = cost[0];
		for(int i =0;i<N;i++) {if(minimum>=cost[i]) {minimum = cost[i];}}
		
		long result = 0;
		int index = 0;
		while(index!=N-1) {
			//���� ������ station�� �����ϸ� ���� �Ÿ� ���� ����� ���⼭ ����
			if(cost[index]==minimum) {
				long now =0;
				for(int i = index;i<N-1;i++) {now+=distance[i];}
				result+=(now*cost[index]);
				break;
			}
			else {
				long now = distance[index];
				int jump = 0;
				for(int i =1;i<N-index;i++) {
					//���� station�� ���� �����̼� ���� ū ���ȸ� jump
					if(cost[index+i]<cost[index]) {
						jump += i;
						break;
					}
					else {now +=distance[index+i];}
				}
				result+=(now*cost[index]);
				index+=jump;
			} 
		}
		System.out.println(result);
	}
}
