Транспортная библиотека neh
===========================

Обеспечивает простой интерфейс для осуществления запросов по сети (request/response - client/server). Обеспечивает лёгкую смену транспортного протокола.
Есть несколько реализаций транспорта, каждая со своими плюсами/минусами.

Документация
============
https://wiki.yandex-team.ru/development/poisk/arcadia/library/cpp/neh/

FAQ
===
Q: А давайте прикрутим SSL (поддержку https)!
A: ~~Этого не будет. neh - низкоуровневая шина, там не место ssl. Подробнее тут: https://clubs.at.yandex-team.ru/stackoverflow/5634~~
A: Сделали