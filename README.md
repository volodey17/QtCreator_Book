# Памятка ООП С++
---
**Класс** – пользовательский тип данных, во многом аналогичный структуре. Описывает свойства и методы,
которые будут доступны у объекта, построенного по описанию.(набор данных и функций для работы с ними)

```class MyClass: public ParentClass // ParentClass — класс-предок, если таковой имеется
{      public:
       // элементы в этой секции доступны из любой части программы
       MyClass(); // конструктор
       ~MyClass(); // деструктор
    protected:
       // элементы в этой секции доступны из класса и его потомков
    private:
       // элементы в этой секции доступны только из класса; это область доступа по умолчанию
       // По-умолчанию все функции и переменные, объявленные в классе, являются закрытыми
};```
---

**Объект**(экземпляр класса, instance) — переменная, в описании которой класс указан в качестве типа данных;

Состоит из:
*имя объекта;
*свойства(переменная-член класса) - переменные определенные в классе;
*методы - функции, кото­рые объявляются внутри класса.

состояние - это набор свойств(переменных).
интерфейс – это набор методов(функций) класса, доступных для использования другими классами.
---

**Инкапсуляция** - это свойство системы, позволяющее объединить данные и методы, работающие с ними,
в классе и скрыть детали реализации от пользователя.

**Наследование** – это свойство системы, позволяющее описать новый класс на основе уже существующего с частично
или полностью заимствующейся функциональностью. Класс, от которого производится наследование,
называется базовым или родительским. Новый класс – потомком, наследником или производным классом.

**Полиморфизм** – это свойство системы использовать объекты с одинаковым интерфейсом без информации о типе
и внутренней структуре объекта.
---

Область видимости:
*PUBLIC(общедоступные) - можно получать доступ из любого контекста.
*PRIVATE(закры­тые) - можно получить доступ только из того класса, в котором они объявлены.
Подклассы данного класса не имеют доступа к таким свойствам и методам.
*PROTECTED(защищенные) - можно получить доступ либо из содержащего их класса, либо из его подкласса.

---
**Дружественные функции**(friend) - это функции, которые не являются членами класса, однако имеют доступ
к его закрытым членам - переменным и функциям, которые имеют спецификатор private.

**Статические функции**(static) - это функции, используемые в контексте класса. Они
сами не могут получать доступ ни к каким обычным свойствам класса, потому что
такие свойства принадлежат объектам. Однако из статических методов можно обращаться к статическим свойствам.
