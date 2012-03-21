class TimeOfDay {
    private:
        int m_hour;
    public:
        TimeOfDay(int hour, int minute) : m_hour(hour) {}
        int hour() { return m_hour; }
};
