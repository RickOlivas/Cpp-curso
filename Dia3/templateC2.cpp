#include <iostream>


template <typename I, typename E>
class BBDDItf
{
public:
    virtual void add(I &id, E &entity) = 0;
    virtual E &get(I &id) = 0;
    virtual void update(I &id, E &entity) = 0;
};

template <typename I, typename E>
class BBDD : public BBDDItf<I, E>
{
public:
    BBDD() {}
    virtual ~BBDD() {}
    virtual void add(I &id, E &entity)
    {
        _mapa[id] = entity;
    }
    virtual E &get(I &id) { return _mapa[id]; }
    virtual void update(I &id, E &entity)
    {
        _mapa[id] = entity;
    }
private:
    std::map<I, E> _mapa;
};

template <typename I, typename E>
void f(BBDDItf<I, E>* bd)
{

}

int maint(){
    BBDD<int, std::string> bd;
    int id = 11;
    std::string entity = "datos";
    bd.add(id, entity);
    bd.get(id);
    bd.update(id, entity);

    f(&bd);
    return 0;
}