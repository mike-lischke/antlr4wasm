/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#pragma once

EMSCRIPTEN_BINDINGS(antlr4_misc) {
  class_<misc::MurmurHash>("MurmurHash")
    .class_function("initialize", select_overload<size_t()>(&misc::MurmurHash::initialize))
    .class_function("initialize", select_overload<size_t(size_t)>(&misc::MurmurHash::initialize))

    .class_function("update", select_overload<size_t(size_t, size_t)>(&misc::MurmurHash::update))
    .class_function("update",
                    select_overload<size_t(size_t, Ref<atn::PredictionContext> const &)>(&misc::MurmurHash::update))
    .class_function("update", select_overload<size_t(size_t, const void *, size_t)>(&misc::MurmurHash::update),
                    allow_raw_pointer<void>())

    .class_function("finish", select_overload<size_t(size_t, size_t)>(&misc::MurmurHash::finish));

  class_<misc::Interval>("Interval")
    .class_property("INVALID", &misc::Interval::INVALID)
    .property("a", &misc::Interval::a)
    .property("b", &misc::Interval::b)

    .constructor<>()
    .constructor<ssize_t, ssize_t>()

    .function("length", &misc::Interval::length)
    .function("equals", &misc::Interval::operator==)

    .function("hashCode", &misc::Interval::hashCode)
    .function("startsBeforeDisjoint", &misc::Interval::startsBeforeDisjoint)
    .function("startsBeforeNonDisjoint", &misc::Interval::startsBeforeNonDisjoint)
    .function("startsAfter", &misc::Interval::startsAfter)
    .function("startsAfterDisjoint", &misc::Interval::startsAfterDisjoint)
    .function("startsAfterNonDisjoint", &misc::Interval::startsAfterNonDisjoint)
    .function("disjoint", &misc::Interval::disjoint)
    .function("adjacent", &misc::Interval::adjacent)
    .function("properlyContains", &misc::Interval::properlyContains)
    .function("union", &misc::Interval::Union)
    .function("intersection", &misc::Interval::intersection)
    .function("toString", &misc::Interval::toString);

  class_<misc::IntervalSet>("IntervalSet")
    .class_property("COMPLETE_CHAR_SET", &misc::IntervalSet::COMPLETE_CHAR_SET)
    .class_property("EMPTY_SET", &misc::IntervalSet::EMPTY_SET)

    .class_function("of", select_overload<misc::IntervalSet(ssize_t)>(&misc::IntervalSet::of))
    .class_function("of", select_overload<misc::IntervalSet(ssize_t, ssize_t)>(&misc::IntervalSet::of))
    .class_function("or", &misc::IntervalSet::Or)
    .class_function("subtract", &misc::IntervalSet::subtract)

    .constructor<>()
    .constructor<misc::IntervalSet const &>()

    .function("clear", &misc::IntervalSet::clear)
    .function("add", select_overload<void(ssize_t)>(&misc::IntervalSet::add))
    .function("add", select_overload<void(ssize_t, ssize_t)>(&misc::IntervalSet::add))
    .function("add", select_overload<void(misc::Interval const &)>(&misc::IntervalSet::add))
    .function("addAll", &misc::IntervalSet::addAll)
    .function("complement", select_overload<misc::IntervalSet(ssize_t, ssize_t) const>(&misc::IntervalSet::complement))
    .function("complement",
              select_overload<misc::IntervalSet(const misc::IntervalSet &) const>(&misc::IntervalSet::complement))
    .function("subtract",
              select_overload<misc::IntervalSet(const misc::IntervalSet &) const>(&misc::IntervalSet::subtract))
    .function("or", select_overload<misc::IntervalSet(const misc::IntervalSet &) const>(&misc::IntervalSet::Or))
    .function("and", &misc::IntervalSet::And)
    .function("contains", select_overload<bool(ssize_t) const>(&misc::IntervalSet::contains))
    .function("contains", select_overload<bool(size_t) const>(&misc::IntervalSet::contains))
    .function("isEmpty", &misc::IntervalSet::isEmpty)
    .function("getSingleElement", &misc::IntervalSet::getSingleElement)
    .function("getMaxElement", &misc::IntervalSet::getMaxElement)
    .function("getMinElement", &misc::IntervalSet::getMinElement)
    .function("getIntervals", &misc::IntervalSet::getIntervals)
    .function("hashCode", &misc::IntervalSet::hashCode)
    .function("toString", select_overload<std::string() const>(&misc::IntervalSet::toString))
    .function("toString", select_overload<std::string(bool) const>(&misc::IntervalSet::toString))
    .function("toString", select_overload<std::string(const dfa::Vocabulary &) const>(&misc::IntervalSet::toString))
    .function("size", &misc::IntervalSet::size)
    .function("toList", &misc::IntervalSet::toList)
    .function("toSet", &misc::IntervalSet::toSet)
    .function("get", &misc::IntervalSet::get)
    .function("remove", select_overload<void(ssize_t)>(&misc::IntervalSet::remove))
    .function("remove", select_overload<void(size_t)>(&misc::IntervalSet::remove))

    .function("equals", &misc::IntervalSet::operator==);
}
