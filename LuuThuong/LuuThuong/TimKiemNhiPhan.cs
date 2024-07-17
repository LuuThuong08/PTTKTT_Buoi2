using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LuuThuong
{
    public class TimKiemNhiPhan
    {
        public static void Main(string[] args)
        {
            int[] A = { 2, 5, 8, 12, 16, 23, 38, 56, 72, 91 };
            int n = A.Length;
            int key = 23;

            int result = Binary_Search(A, n, key);
            if (result == -1)
            {
                Console.WriteLine("Khong tim thay key:" + key + " trong mang.");
            }
            else
            {
                Console.WriteLine("Vi tri cua key:" + key + " trong mang la: " + result);
            }
            Console.ReadKey();
        }
        public static int Binary_Search(int[] A, int n, int key)
        {
            int left = 0;
            int right = n - 1;

            while (left <= right)
            {
                int mid = (left + right) / 2;
                if (A[mid] == key)
                {
                    return mid;
                }
                else if (key < A[mid])
                {
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }
            return -1; // Không tìm thấy key trong mảng
        }
    }
}
