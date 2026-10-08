class Solution {
public:
    void pattern17(int n) {
  for (int i = 1; i <= n; i++) {

        // Spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Increasing letters
        for (int j = 0; j < i; j++) {
            cout << char('A' + j);
        }

        // Decreasing letters
        for (int j = i - 2; j >= 0; j--) {
            cout << char('A' + j);
        }

        cout << endl;
    }

    
    }
};