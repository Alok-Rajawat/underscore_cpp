#pragma once

template <typename Iterator, typename Function>
void each(Iterator begin, Iterator end, Function function);

template <typename Iterator, typename Function>
void transform(Iterator first_begin, Iterator first_end, Iterator second_begin, Function function);

template <typename Collection, typename Function>
Collection filter_accept(Collection &collection, Function function);

template <typename Collection, typename Function>
Collection filter_reject(Collection &collection, Function function);

template <typename Iterator, typename Predicate>
Iterator find_if(Iterator begin, Iterator end, Predicate predicate);

template <typename Iterator, typename Predicate>
Iterator find_if_not(Iterator begin, Iterator end, Predicate predicate);

template <typename Iterator, typename Predicate>
bool every(Iterator begin, Iterator end, Predicate predicate);

template <typename Iterator, typename Predicate>
bool any(Iterator begin, Iterator end, Predicate predicate);

template <typename Container>
typename Container::iterator max(Container container);

template <typename Iterator, typename Predicate>
int count_by(Iterator begin, Iterator end, Predicate predicate);

template <typename Iterator, typename Data>
bool contains(Iterator begin, Iterator end, Data data);

