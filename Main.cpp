#include <iostream>
using namespace std;

class SpecialSymbols {
public:
    // { O, A, I, E, H, C, B, K, P, X, T, M }
    SpecialSymbols(char Symbol) {
        this->SpecialSymbol = Symbol;
    }

    void SetSymbols(char Symbol) {
        this->SpecialSymbol = Symbol;
    }

    bool operator==(SpecialSymbols Symbol) {
        if (Symbol.SpecialSymbol == this->SpecialSymbol)
            return true;

        if ((Symbol.SpecialSymbol == 'O' || Symbol.SpecialSymbol == 'О') && (this->SpecialSymbol == 'O' || this->SpecialSymbol == 'О'))
                return true;

        if ((Symbol.SpecialSymbol == 'A' || Symbol.SpecialSymbol == 'А') && (this->SpecialSymbol == 'A' || this->SpecialSymbol == 'А'))
                return true;

        if ((Symbol.SpecialSymbol == 'I' || Symbol.SpecialSymbol == 'І') && (this->SpecialSymbol == 'I' || this->SpecialSymbol == 'І'))
                return true;

        if ((Symbol.SpecialSymbol == 'E' || Symbol.SpecialSymbol == 'Е') && (this->SpecialSymbol == 'E' || this->SpecialSymbol == 'Е'))
                return true;

        if ((Symbol.SpecialSymbol == 'H' || Symbol.SpecialSymbol == 'Н') && (this->SpecialSymbol == 'H' || this->SpecialSymbol == 'Н'))
                return true;

        if ((Symbol.SpecialSymbol == 'C' || Symbol.SpecialSymbol == 'С') && (this->SpecialSymbol == 'C' || this->SpecialSymbol == 'С'))
                return true;

        if ((Symbol.SpecialSymbol == 'B' || Symbol.SpecialSymbol == 'В') && (this->SpecialSymbol == 'B' || this->SpecialSymbol == 'В'))
                return true;

        if ((Symbol.SpecialSymbol == 'K' || Symbol.SpecialSymbol == 'К') && (this->SpecialSymbol == 'K' || this->SpecialSymbol == 'К'))
                return true;

        if ((Symbol.SpecialSymbol == 'P' || Symbol.SpecialSymbol == 'Р') && (this->SpecialSymbol == 'P' || this->SpecialSymbol == 'Р'))
                return true;

        if ((Symbol.SpecialSymbol == 'X' || Symbol.SpecialSymbol == 'Х') && (this->SpecialSymbol == 'X' || this->SpecialSymbol == 'Х'))
                return true;

        if ((Symbol.SpecialSymbol == 'T' || Symbol.SpecialSymbol == 'Т') && (this->SpecialSymbol == 'T' || this->SpecialSymbol == 'Т'))
                return true;

        if ((Symbol.SpecialSymbol == 'M' || Symbol.SpecialSymbol == 'М') && (this->SpecialSymbol == 'M' || this->SpecialSymbol == 'М'))
                return true;

        return false;
    }

    bool operator!=(SpecialSymbols Symbol) {
        if (Symbol.SpecialSymbol == this->SpecialSymbol)
            return false;

        if ((Symbol.SpecialSymbol == 'O' || Symbol.SpecialSymbol == 'О') && (this->SpecialSymbol == 'O' || this->SpecialSymbol == 'О'))
            return false;

        if ((Symbol.SpecialSymbol == 'A' || Symbol.SpecialSymbol == 'А') && (this->SpecialSymbol == 'A' || this->SpecialSymbol == 'А'))
            return false;

        if ((Symbol.SpecialSymbol == 'I' || Symbol.SpecialSymbol == 'І') && (this->SpecialSymbol == 'I' || this->SpecialSymbol == 'І'))
            return false;

        if ((Symbol.SpecialSymbol == 'E' || Symbol.SpecialSymbol == 'Е') && (this->SpecialSymbol == 'E' || this->SpecialSymbol == 'Е'))
            return false;

        if ((Symbol.SpecialSymbol == 'H' || Symbol.SpecialSymbol == 'Н') && (this->SpecialSymbol == 'H' || this->SpecialSymbol == 'Н'))
            return false;

        if ((Symbol.SpecialSymbol == 'C' || Symbol.SpecialSymbol == 'С') && (this->SpecialSymbol == 'C' || this->SpecialSymbol == 'С'))
            return false;

        if ((Symbol.SpecialSymbol == 'B' || Symbol.SpecialSymbol == 'В') && (this->SpecialSymbol == 'B' || this->SpecialSymbol == 'В'))
            return false;

        if ((Symbol.SpecialSymbol == 'K' || Symbol.SpecialSymbol == 'К') && (this->SpecialSymbol == 'K' || this->SpecialSymbol == 'К'))
            return false;

        if ((Symbol.SpecialSymbol == 'P' || Symbol.SpecialSymbol == 'Р') && (this->SpecialSymbol == 'P' || this->SpecialSymbol == 'Р'))
            return false;

        if ((Symbol.SpecialSymbol == 'X' || Symbol.SpecialSymbol == 'Х') && (this->SpecialSymbol == 'X' || this->SpecialSymbol == 'Х'))
            return false;

        if ((Symbol.SpecialSymbol == 'T' || Symbol.SpecialSymbol == 'Т') && (this->SpecialSymbol == 'T' || this->SpecialSymbol == 'Т'))
            return false;

        if ((Symbol.SpecialSymbol == 'M' || Symbol.SpecialSymbol == 'М') && (this->SpecialSymbol == 'M' || this->SpecialSymbol == 'М'))
            return false;

        return true;
    }

    char SpecialSymbol;
};

int main() {
    SpecialSymbols symbol1('A');
    SpecialSymbols symbol2('А');

    if (symbol1 == symbol2)
        cout << "== true" << "\n";
    else
        cout << "== false" << "\n";

    if (symbol1 != symbol2)
        cout << "!= true" << "\n";
    else
        cout << "!= false" << "\n";

    return 0;
}

/*
Створіть клас для роботи з особливими символами. Можете його так і назвати: ОсобливіСимволи. Ось
перелік особливих символів { O, A, I, E, H, C, B, K, P, X, T, M }. Їх особливість у тому, що вони притаманні
українській і англійській абеткам. Є ризик не помітити українську букву в англійському слові і навпаки.

Ваш клас має містити перевантажені оператори ==, !=. 

Таким чином, щоб символи, які в різних абетках пишуть однаково і їх можна сплутати,
повертали істинне значення при застосуванні оператора == 

і хибне значення при застосуванні !=. Наприклад буква А з української абетки має дорівнювати букві A з
англійської.

В головній функції дайте користувачу можливість порівнювати різні символи і видавати результат такого
порівняння. Якщо символ порівнюють з самим собою, то результат теж має бути істинно.
*/
