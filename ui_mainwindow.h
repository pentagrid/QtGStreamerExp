/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>
#include "player.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionOpen_playlist;
    QAction *actionSave_playlist;
    QAction *actionSettings;
    QAction *actionExit;
    QAction *actionPlay;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionNext;
    QAction *actionPrevious;
    QAction *actionIncrease_plabackrate;
    QAction *actionDecrease_playbackrate;
    QAction *actionEnter_fullscreen;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QSplitter *splitter;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_3;
    QTreeView *treeView;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QListView *m_playListView;
    QWidget *m_playlistToolbar;
    QPushButton *m_addToPlayListButton;
    QPushButton *m_removeFromPlaylist;
    QPushButton *m_moveUpInPlaylist;
    QPushButton *m_moveDownInPlaylist;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    Player *m_player;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_3;
    QGridLayout *gridLayout_6;
    QPushButton *m_nextButton;
    QPushButton *m_playButton;
    QPushButton *m_stopButton;
    QWidget *widget_5;
    QPushButton *m_pauseButton;
    QPushButton *m_previousButton;
    QWidget *widget_7;
    QPushButton *m_decreaseRateButton;
    QPushButton *m_increaseRateButton;
    QPushButton *m_volumeButton;
    QWidget *widget_4;
    QSlider *m_volumeSlider;
    QPushButton *m_fullscreenButton;
    QWidget *widget_6;
    QGridLayout *gridLayout_4;
    QSlider *m_positionSlider;
    QLabel *m_positionLabel;
    QLabel *m_fullLengthLabel;
    QFrame *m_statusbar;
    QLabel *m_bitrateLabel;
    QLabel *m_filetypeLabel;
    QFrame *line;
    QFrame *line_2;
    QLabel *m_lengthLabel;
    QMenuBar *menuBar;
    QMenu *menuFIle;
    QMenu *menuPlayback;
    QMenu *menuView;
    QMenu *menuHelp;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(960, 467);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen_playlist = new QAction(MainWindow);
        actionOpen_playlist->setObjectName(QString::fromUtf8("actionOpen_playlist"));
        actionSave_playlist = new QAction(MainWindow);
        actionSave_playlist->setObjectName(QString::fromUtf8("actionSave_playlist"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionPlay = new QAction(MainWindow);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        actionPrevious = new QAction(MainWindow);
        actionPrevious->setObjectName(QString::fromUtf8("actionPrevious"));
        actionIncrease_plabackrate = new QAction(MainWindow);
        actionIncrease_plabackrate->setObjectName(QString::fromUtf8("actionIncrease_plabackrate"));
        actionDecrease_playbackrate = new QAction(MainWindow);
        actionDecrease_playbackrate->setObjectName(QString::fromUtf8("actionDecrease_playbackrate"));
        actionEnter_fullscreen = new QAction(MainWindow);
        actionEnter_fullscreen->setObjectName(QString::fromUtf8("actionEnter_fullscreen"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(splitter->sizePolicy().hasHeightForWidth());
        splitter->setSizePolicy(sizePolicy);
        splitter->setLineWidth(0);
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(1);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMaximumSize(QSize(300, 16777215));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        treeView = new QTreeView(tab);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setContextMenuPolicy(Qt::CustomContextMenu);

        gridLayout_3->addWidget(treeView, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        m_playListView = new QListView(tab_2);
        m_playListView->setObjectName(QString::fromUtf8("m_playListView"));

        gridLayout_5->addWidget(m_playListView, 0, 0, 1, 1);

        m_playlistToolbar = new QWidget(tab_2);
        m_playlistToolbar->setObjectName(QString::fromUtf8("m_playlistToolbar"));
        m_playlistToolbar->setMinimumSize(QSize(0, 32));
        m_playlistToolbar->setMaximumSize(QSize(16777215, 32));
        m_playlistToolbar->setLayoutDirection(Qt::RightToLeft);
        m_addToPlayListButton = new QPushButton(m_playlistToolbar);
        m_addToPlayListButton->setObjectName(QString::fromUtf8("m_addToPlayListButton"));
        m_addToPlayListButton->setGeometry(QRect(0, 0, 32, 32));
        m_addToPlayListButton->setMinimumSize(QSize(32, 32));
        m_addToPlayListButton->setMaximumSize(QSize(32, 32));
        m_addToPlayListButton->setLayoutDirection(Qt::RightToLeft);
        m_removeFromPlaylist = new QPushButton(m_playlistToolbar);
        m_removeFromPlaylist->setObjectName(QString::fromUtf8("m_removeFromPlaylist"));
        m_removeFromPlaylist->setGeometry(QRect(40, 0, 32, 32));
        m_removeFromPlaylist->setMinimumSize(QSize(32, 32));
        m_removeFromPlaylist->setMaximumSize(QSize(32, 32));
        m_moveUpInPlaylist = new QPushButton(m_playlistToolbar);
        m_moveUpInPlaylist->setObjectName(QString::fromUtf8("m_moveUpInPlaylist"));
        m_moveUpInPlaylist->setGeometry(QRect(80, 0, 32, 32));
        m_moveUpInPlaylist->setMinimumSize(QSize(32, 32));
        m_moveUpInPlaylist->setMaximumSize(QSize(32, 32));
        m_moveDownInPlaylist = new QPushButton(m_playlistToolbar);
        m_moveDownInPlaylist->setObjectName(QString::fromUtf8("m_moveDownInPlaylist"));
        m_moveDownInPlaylist->setGeometry(QRect(120, 0, 32, 32));
        m_moveDownInPlaylist->setMinimumSize(QSize(32, 32));
        m_moveDownInPlaylist->setMaximumSize(QSize(32, 32));

        gridLayout_5->addWidget(m_playlistToolbar, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        splitter->addWidget(tabWidget);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_player = new Player(widget_2);
        m_player->setObjectName(QString::fromUtf8("m_player"));

        gridLayout->addWidget(m_player, 0, 0, 1, 1);

        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 40));
        widget->setMaximumSize(QSize(16777215, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_6 = new QGridLayout(widget_3);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        m_nextButton = new QPushButton(widget_3);
        m_nextButton->setObjectName(QString::fromUtf8("m_nextButton"));
        m_nextButton->setMinimumSize(QSize(32, 32));
        m_nextButton->setMaximumSize(QSize(32, 32));

        gridLayout_6->addWidget(m_nextButton, 1, 5, 1, 1);

        m_playButton = new QPushButton(widget_3);
        m_playButton->setObjectName(QString::fromUtf8("m_playButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_playButton->sizePolicy().hasHeightForWidth());
        m_playButton->setSizePolicy(sizePolicy1);
        m_playButton->setMinimumSize(QSize(32, 32));
        m_playButton->setMaximumSize(QSize(32, 32));

        gridLayout_6->addWidget(m_playButton, 1, 1, 1, 1);

        m_stopButton = new QPushButton(widget_3);
        m_stopButton->setObjectName(QString::fromUtf8("m_stopButton"));
        m_stopButton->setMinimumSize(QSize(32, 32));
        m_stopButton->setMaximumSize(QSize(32, 32));

        gridLayout_6->addWidget(m_stopButton, 1, 4, 1, 1);

        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));

        gridLayout_6->addWidget(widget_5, 1, 6, 1, 1);

        m_pauseButton = new QPushButton(widget_3);
        m_pauseButton->setObjectName(QString::fromUtf8("m_pauseButton"));
        m_pauseButton->setMaximumSize(QSize(32, 32));

        gridLayout_6->addWidget(m_pauseButton, 1, 0, 1, 1);

        m_previousButton = new QPushButton(widget_3);
        m_previousButton->setObjectName(QString::fromUtf8("m_previousButton"));
        m_previousButton->setMinimumSize(QSize(32, 32));
        m_previousButton->setMaximumSize(QSize(32, 32));

        gridLayout_6->addWidget(m_previousButton, 1, 3, 1, 1);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setMinimumSize(QSize(5, 32));
        widget_7->setMaximumSize(QSize(5, 32));

        gridLayout_6->addWidget(widget_7, 1, 2, 1, 1);


        horizontalLayout->addWidget(widget_3);

        m_decreaseRateButton = new QPushButton(widget);
        m_decreaseRateButton->setObjectName(QString::fromUtf8("m_decreaseRateButton"));
        m_decreaseRateButton->setMinimumSize(QSize(32, 32));
        m_decreaseRateButton->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(m_decreaseRateButton);

        m_increaseRateButton = new QPushButton(widget);
        m_increaseRateButton->setObjectName(QString::fromUtf8("m_increaseRateButton"));
        m_increaseRateButton->setMinimumSize(QSize(32, 32));
        m_increaseRateButton->setMaximumSize(QSize(32, 32));

        horizontalLayout->addWidget(m_increaseRateButton);

        m_volumeButton = new QPushButton(widget);
        m_volumeButton->setObjectName(QString::fromUtf8("m_volumeButton"));
        m_volumeButton->setMinimumSize(QSize(32, 32));
        m_volumeButton->setMaximumSize(QSize(32, 32));
        m_volumeButton->setLayoutDirection(Qt::LeftToRight);
        m_volumeButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(m_volumeButton);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setMaximumSize(QSize(300, 32));
        widget_4->setLayoutDirection(Qt::LeftToRight);
        m_volumeSlider = new QSlider(widget_4);
        m_volumeSlider->setObjectName(QString::fromUtf8("m_volumeSlider"));
        m_volumeSlider->setGeometry(QRect(0, 0, 220, 32));
        m_volumeSlider->setMinimumSize(QSize(220, 32));
        m_volumeSlider->setMaximumSize(QSize(220, 32));
        m_volumeSlider->setOrientation(Qt::Horizontal);
        m_fullscreenButton = new QPushButton(widget_4);
        m_fullscreenButton->setObjectName(QString::fromUtf8("m_fullscreenButton"));
        m_fullscreenButton->setGeometry(QRect(220, 0, 32, 32));
        m_fullscreenButton->setMinimumSize(QSize(32, 32));
        m_fullscreenButton->setMaximumSize(QSize(32, 32));
        m_fullscreenButton->setLayoutDirection(Qt::LeftToRight);
        m_fullscreenButton->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(widget_4);


        gridLayout->addWidget(widget, 3, 0, 1, 1);

        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setMaximumSize(QSize(16777215, 45));
        gridLayout_4 = new QGridLayout(widget_6);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        m_positionSlider = new QSlider(widget_6);
        m_positionSlider->setObjectName(QString::fromUtf8("m_positionSlider"));
        m_positionSlider->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(m_positionSlider, 0, 1, 1, 1);

        m_positionLabel = new QLabel(widget_6);
        m_positionLabel->setObjectName(QString::fromUtf8("m_positionLabel"));

        gridLayout_4->addWidget(m_positionLabel, 0, 0, 1, 1);

        m_fullLengthLabel = new QLabel(widget_6);
        m_fullLengthLabel->setObjectName(QString::fromUtf8("m_fullLengthLabel"));

        gridLayout_4->addWidget(m_fullLengthLabel, 0, 2, 1, 1);


        gridLayout->addWidget(widget_6, 2, 0, 1, 1);

        splitter->addWidget(widget_2);

        gridLayout_2->addWidget(splitter, 0, 0, 1, 1);

        m_statusbar = new QFrame(centralWidget);
        m_statusbar->setObjectName(QString::fromUtf8("m_statusbar"));
        m_statusbar->setMinimumSize(QSize(0, 24));
        m_statusbar->setMaximumSize(QSize(16777215, 24));
        m_statusbar->setFrameShape(QFrame::NoFrame);
        m_statusbar->setFrameShadow(QFrame::Raised);
        m_bitrateLabel = new QLabel(m_statusbar);
        m_bitrateLabel->setObjectName(QString::fromUtf8("m_bitrateLabel"));
        m_bitrateLabel->setGeometry(QRect(60, 0, 61, 21));
        m_filetypeLabel = new QLabel(m_statusbar);
        m_filetypeLabel->setObjectName(QString::fromUtf8("m_filetypeLabel"));
        m_filetypeLabel->setGeometry(QRect(10, 0, 41, 21));
        line = new QFrame(m_statusbar);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(40, 0, 21, 61));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(m_statusbar);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(130, 0, 3, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        m_lengthLabel = new QLabel(m_statusbar);
        m_lengthLabel->setObjectName(QString::fromUtf8("m_lengthLabel"));
        m_lengthLabel->setGeometry(QRect(140, 0, 61, 21));

        gridLayout_2->addWidget(m_statusbar, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 960, 25));
        menuFIle = new QMenu(menuBar);
        menuFIle->setObjectName(QString::fromUtf8("menuFIle"));
        menuPlayback = new QMenu(menuBar);
        menuPlayback->setObjectName(QString::fromUtf8("menuPlayback"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFIle->menuAction());
        menuBar->addAction(menuPlayback->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFIle->addAction(actionOpen);
        menuFIle->addAction(actionOpen_playlist);
        menuFIle->addAction(actionSave_playlist);
        menuFIle->addAction(actionSettings);
        menuFIle->addAction(actionExit);
        menuPlayback->addAction(actionPlay);
        menuPlayback->addAction(actionPause);
        menuPlayback->addAction(actionStop);
        menuPlayback->addAction(actionNext);
        menuPlayback->addAction(actionPrevious);
        menuPlayback->addAction(actionIncrease_plabackrate);
        menuPlayback->addAction(actionDecrease_playbackrate);
        menuView->addAction(actionEnter_fullscreen);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpen->setText(QApplication::translate("MainWindow", "&Open file", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen_playlist->setText(QApplication::translate("MainWindow", "Open playlist", nullptr));
        actionSave_playlist->setText(QApplication::translate("MainWindow", "Save playlist", nullptr));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        actionPlay->setText(QApplication::translate("MainWindow", "Play", nullptr));
        actionPause->setText(QApplication::translate("MainWindow", "Pause", nullptr));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", nullptr));
        actionNext->setText(QApplication::translate("MainWindow", "Next", nullptr));
        actionPrevious->setText(QApplication::translate("MainWindow", "Previous", nullptr));
        actionIncrease_plabackrate->setText(QApplication::translate("MainWindow", "Increase plabackrate", nullptr));
        actionDecrease_playbackrate->setText(QApplication::translate("MainWindow", "Decrease playbackrate", nullptr));
        actionEnter_fullscreen->setText(QApplication::translate("MainWindow", "Enter fullscreen", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Library", nullptr));
        m_addToPlayListButton->setText(QString());
        m_removeFromPlaylist->setText(QString());
        m_moveUpInPlaylist->setText(QString());
        m_moveDownInPlaylist->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Playlists", nullptr));
        m_nextButton->setText(QString());
        m_playButton->setText(QString());
        m_stopButton->setText(QString());
        m_pauseButton->setText(QString());
        m_previousButton->setText(QString());
        m_decreaseRateButton->setText(QString());
        m_increaseRateButton->setText(QString());
        m_volumeButton->setText(QString());
        m_fullscreenButton->setText(QString());
        m_positionLabel->setText(QApplication::translate("MainWindow", "--:--", nullptr));
        m_fullLengthLabel->setText(QApplication::translate("MainWindow", "--:--", nullptr));
        m_bitrateLabel->setText(QApplication::translate("MainWindow", "--------------", nullptr));
        m_filetypeLabel->setText(QApplication::translate("MainWindow", "--------", nullptr));
        m_lengthLabel->setText(QString());
        menuFIle->setTitle(QApplication::translate("MainWindow", "&FIle", nullptr));
        menuPlayback->setTitle(QApplication::translate("MainWindow", "Playback", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "View", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
