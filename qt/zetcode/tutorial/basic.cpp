#include <QTextStream>
#include <QDate>
#include <QTime>
#include <QVector>
#include <QList>
#include <QFileInfo>

int main(void) {
    QTextStream out(stdout);
    QString a {"love"};

    a.append(" cless");
    a.prepend("I ");

    out << a << endl;
    out << "The a string has " << a.count() << " characters" << endl;

    out << a.toUpper() << endl;
    out << a.toLower() << endl;

    QString s1 = "There are %1 white bears and %2 red wolves.";
    QString s2 = "There are %2 xd and %1 hejka";
    int wb = 20;
    int rw = 199;

    out << s1.arg(wb).arg(rw) << endl;
    out << s2.arg(wb).arg(rw) << endl;

    QStringRef sub(&s1, 0, 7);
    out << sub << endl;

    QDate dt{2022,4,27};
    out << "The date is " << dt.toString() << endl;
    dt.setDate(1999,12,12);
    out << "The date is " << dt.toString() << endl;

    QDate cd = QDate::currentDate();
    QTime ct = QTime::currentTime();

    out << "Current date is: " << cd.toString() << endl;
    out << "Current time is: " << ct.toString() << endl;

    QVector<int> vals = {1,2,3,4,5};
    out << "The size of the vector is: " << vals.size() << endl;
    out << "The first item: " << vals.first() << endl;
    out << "The last item: " << vals.last() << endl;
    vals.append(6);
    vals.prepend(0);

    out << "Elements: ";
    for (int val : vals)
    {
        out << val << " ";
    }
    out << endl;


    QList<QString> authors = {"X", "Y", "Z"};
    for (int i = 0; i < authors.size(); ++i)
    {
        out << authors.at(i) << endl;
    }

    authors << "A" << "B";
    std::sort(authors.begin(), authors.end());

    for (QString author : authors)
    {
        out << author << endl;
    }


    QString filename = "/home/mgalazka/studying/qt/zetcode/test.txt";
    QFile f{filename};

    if (!f.exists())
    {
        qWarning("no kij mi w oczko");
    }



    return 0;


}
