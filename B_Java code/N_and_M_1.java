package baekjoon;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
public class N_and_M_1 {
	//0 ~ 8���� �ش� ���� �̹� ������ ���Ե� ���� �ִ��� Ȯ��
	static boolean visitedL[] = new boolean[9];
	static int arr[] = new int[9];
	static void function(int index, int N, int M, StringBuilder sR) {
		//������ �� ä���� ���
		if(index == M) {
			for(int i =0;i<M;i++) {
				sR.append(arr[i]+" ");
			}
			sR.append("\n");
			 //�ϳ��� ���� �� ����ϸ� �ٹٲٱ�
			return;
		}
		else {
			for(int i =1;i<=N;i++) {
				//�ش� ���ڰ� �̹� ���� �ȿ� ���� ���
				if(visitedL[i] == true) {
					continue; 
				}
				//�ش� ���ڰ� ������ ���⿡ ���Խ�Ű�� �湮�ߴٰ� ǥ��
				arr[index] = i;
				visitedL[i] = true;
				//������ ��ä������ ���&�ٸ� �� �־�� ����
				//���� ������ �� ��ä������ ���� ���� ä��� ����
				function(index+1, N,M, sR);
				//������ ��ä���� ���� ����� return�Ǿ ����� �Ѿ��
				//������ ���� �湮 ������ ����
				//arr�� ó�� �� i���� false�� ����� 
				//�� ���� ���ڸ� arr ù��ҷ� ���� �� �ְ� i++
				visitedL[i] = false;
			}
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = "";
        StringBuilder sR = new StringBuilder();
        try {
            s = br.readLine();
        } catch (IOException e) {}
        StringTokenizer st = new StringTokenizer(s);
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
		function(0,N,M,sR);
		System.out.println(sR);
	}

}
