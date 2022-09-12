#ifndef GAME_H
#define GAME_H
#include <QSize>
#include <QImage>

class Game
{
public:
    Game();
    ~Game();
    void init();
    void update();
    QImage image() const;
    constexpr static const QSize LOGIC_SIZE = QSize(160, 100);
    enum Type{
      Random, Pentomino, GosperGliderGun, InfiniteGrowth
    };
    void setType(Type type);
    void print();
    void setPattern(int x, int y, QString pattern);
    int cell(int x, int y) const;
private:
    int *m_output;
    int *m_state;
    QImage m_image;
    Type m_type;
};

#endif // GAME_H
