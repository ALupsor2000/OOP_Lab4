#pragma once

#include "ApothekeController.h"
#include "Medicament.h"


class ApothekeUI
{
    friend class AppothekeController;

private:
    ApothekeController controller;
    static void show_menu();
    void add_medicament();
    void remove_medicament();
    void change_med();
    void search_str();
    void less_med();
    void preis_group();

public:

	ApothekeUI();

    void startUI();
};

