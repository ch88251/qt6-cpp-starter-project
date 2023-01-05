add_executable(addressbook
    main.cpp
    mainwindow.cpp
    addresswidget.cpp
)

target_link_libraries(addressbook PRIVATE Qt6::Widgets)

set_target_properties(addressbook PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)

