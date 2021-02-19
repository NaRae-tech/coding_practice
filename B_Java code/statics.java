package baekjoon;
import java.util.Scanner;
import java.util.Arrays;
public class statics {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		
		//�Է¹ޱ�
		int T= scan.nextInt();
		int[] list = new int[T];
		int[] index = new int[8002];
		for(int i =0;i<T;i++) {
			list[i] = scan.nextInt();
			index[list[i]+4000]++;
		}
		
		int max = -4001;
		int min = 4001;
		int sum =0;
		for(int i =0;i<T;i++) {
			sum += list[i];
			if(list[i] >= max) {
				max = list[i];
			}
			if(list[i]<=min) {
				min = list[i];
			}
		}
		//���
		double mean = Math.round((double)sum/(double)T);
		//����
		int range = max-min;
		//�߰���
		int median = 0;
		long medianInd = Math.round((double)T/(double)2);
		int now = 0;
		for(int i =min+4000;i<max+4001;i++) {
			now = now + index[i];
			if(now >= medianInd) {
				median = i-4000;
				break;
			}
		}
		//�ֺ�
		int mode = 0;
		int modeCount = 0;
		boolean flag = false;
		for(int i =min+4000;i<max+4001;i++) {
			if(modeCount<index[i]) {
				modeCount = index[i];
				mode = i-4000;
				flag =true;
			}
			else if(index[i] == modeCount && flag==true) {
				mode = i-4000;
				flag = false;
			}
		}
		
		
		System.out.println((int)mean);
		System.out.println(median);
		System.out.println(mode);
		System.out.println(range);
	}
}
