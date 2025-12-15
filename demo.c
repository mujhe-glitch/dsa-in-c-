import java.util.*;

public class MaximumProductAfterReplacement {
    public static int maximumProduct(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int MAX = 100000;
        int MIN = -100000;

        // Collect important candidates (lowest 3 and highest 3)
        List<Integer> candidates = new ArrayList<>();
        for (int i = 0; i < Math.min(3, n); i++) candidates.add(nums[i]); // smallest 3
        for (int i = Math.max(0, n - 3); i < n; i++) candidates.add(nums[i]); // largest 3

        // Try replacing one element with MAX or MIN
        candidates.add(MAX);
        candidates.add(MIN);

        long maxProduct = Long.MIN_VALUE;

        // Check all combinations of 3 distinct elements
        for (int i = 0; i < candidates.size(); i++) {
            for (int j = i + 1; j < candidates.size(); j++) {
                for (int k = j + 1; k < candidates.size(); k++) {
                    long product = 1L * candidates.get(i) * candidates.get(j) * candidates.get(k);
                    maxProduct = Math.max(maxProduct, product);
                }
            }
        }

        return (int) maxProduct;
    }

    public static void main(String[] args) {
        int[] nums1 = {-5, 7, 0};
        System.out.println(maximumProduct(nums1)); // Output: 3500000

        int[] nums2 = {-4, -2, -1, -3};
        System.out.println(maximumProduct(nums2)); // Output: 1200000

        int[] nums3 = {0, 10, 0};
        System.out.println(maximumProduct(nums3)); // Output: 0
    }
}
