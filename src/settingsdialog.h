/**********************************************************************
* File:            settingsdialog.h
* Description:     settings dialog
* Author:          Zdenko Podobny
* Created:         2011-08-18
*
* (C) Copyright 2011, Zdenko Podobny
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**        http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*
**********************************************************************/

#ifndef SRC_SETTINGSDIALOG_H_
#define SRC_SETTINGSDIALOG_H_

#include <QtCore/QDebug>
#include <QtCore/QProcess>
#include <QtCore/QSettings>
#include <QtGui/QFileDialog>

#include "ui_settings.h"

const QString ProductVersion("1.02");
const QString ProjectUrl("https://github.com/zdenop/tesseract-ocr-qt4gui");
const QString ProjectName("Tesseract-OCR QT4 gui");
const QString Organization("tesseract-ocr");

class SettingsDialog : public QDialog, public Ui::SettingsDialog {
  Q_OBJECT

  public:
    explicit SettingsDialog(QWidget* pard = 0);
    ~SettingsDialog();
    void initSettings();

  signals:
    void configuration_changed();

  private slots:
    void on_cb_prefix_toggled();
    void saveSettings();
    void on_pb_check_clicked();
    void on_pb_prog_clicked();
    void on_pb_prefix_clicked();
};

#endif  // SRC_SETTINGSDIALOG_H_
