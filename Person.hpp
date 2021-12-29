#pragma once

class Person {
    public:
        auto Age() const { return age_; }
        auto SetAge(int age) { age_ = age; }
    private:
        int age_{};
};

class Team {
    public:
        auto & Leader() const { return leader_; }
        auto & Leader() { return leader_; }
    private:
        Person leader_;
};


