int get_random(int min, int max) {
    if (min > max) {
        std::swap(min, max);
    }
    constexpr auto random = []() -> double {
        std::uniform_real_distribution<double> distribution{0, 1};
        return distribution(std::default_random_engine());
    };
    int result = min + (max - min) * random();
    return result;
}
