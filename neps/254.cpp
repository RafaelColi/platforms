#include <bits/stdc++.h>

using namespace std;

int main() {
    int p, s;
    cin >> p >> s;
    vector<pair<int, int>> zones;
    vector<pair<int, int>> intervals;

    int begin, end, memB, memE;
    while(s--) {
        cin >> begin >> end;

        intervals.push_back(make_pair(begin, end));
    }
    
    sort(intervals.begin(), intervals.end());

    // Zonas são demarcadas por memB(inicio) e memE(fim)
    memB = intervals[0].first;
    memE = intervals[0].second;

    for(int i = 1; i < intervals.size(); i++) {
        begin = intervals[i].first;
        end = intervals[i].second;

        // 3 possíveis casos ao ler nova zona:
        //  está contida na zona anterior; o inicio está contido, mas o fim ultrapassa; não está contida

        if(begin > memE) { // Se o inicio da nova é maior que o fim da anterior, é uma nova zona. Armazena a anterior no vector e atualiza memB e memE
            zones.push_back(make_pair(memB, memE));
            memB = begin;
            memE = end;
        } else { // Se o inicio é menor que o fim da anterior, nova zona está contida total ou parcialmente na anterior
            if(end > memE) { // Se o fim da nova é maior que o fim da anterior, nova zona está contida parcialmente. Atualiza o fim da zona
                memE = end;
            }

            // Senão, está contida totalmente na zona antiga, não precisa fazer nada
        }
    }

    // Como comparo as zonas antes de inserir, no fim da entrada sempre vou ter uma zona que não vai ser comparada com ninguém e que não foi inserida ainda
    zones.push_back(make_pair(memB, memE));
    
    for(int i = 0; i < zones.size(); i++) {
        cout << zones[i].first << " " << zones[i].second << "\n";
    }

    return 0;
}