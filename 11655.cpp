#include <bits/stdc++.h>

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    for (int i = 0; i < sentence.size(); i++)
    {
        if ((int)sentence[i] >= 65 && (int)sentence[i] <= 90)
        {
            if ((int)sentence[i] <= 77)
            {
                sentence[i] += 13;
            }
            else
            {
                sentence[i] -= 13;
            }
        }
        else if ((int)sentence[i] >= 97 && (int)sentence[i] <= 122)
        {
            if ((int)sentence[i] <= 109)
            {
                sentence[i] += 13;
            }
            else
            {
                sentence[i] -= 13;
            }
        }
    }

    std::cout << sentence;
    return 0;
}