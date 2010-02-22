/*
* Copyright 2010 Kyle M Hall <kyle.m.hall@gmail.com>
*
* This file is part of Koha Offline Circulation.
*
* Koha Offline Circulation is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* Koha Offline Circulation is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with Koha Offline Circulation.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <QtGui>

#include "loginwindow.h"

LoginWindow::LoginWindow(QWidget *parent) : QMainWindow(parent) {
  setupUi(this);
  setupActions();

  this->showMaximized();
  this->showFullScreen();

  usernameField->setFocus();
}

LoginWindow::~LoginWindow() {
}

void LoginWindow::setupActions() {

  connect(usernameField, SIGNAL(returnPressed()),
          passwordField, SLOT(setFocus()));

  connect(loginButton, SIGNAL(clicked()),
          this, SLOT(attemptLogin()));

  connect(cancelButton, SIGNAL(clicked()),
          this, SLOT(resetLoginScreen()));

}

void LoginWindow::getSettings() {
}

/* Protected Slots */
void LoginWindow::attemptLogin() {
}

void LoginWindow::resetLoginScreen() {
  usernameField->clear();
  passwordField->clear();
  usernameField->setFocus();
}


