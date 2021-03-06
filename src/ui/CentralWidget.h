#ifndef CENTRAL_WIDGET_H
#define CENTRAL_WIDGET_H

#include "qtheaders.h"

#include "HMultiView.h"

// define LSideWidget and RSideWidget for future expansion
//#include "lsideWidget.h"
//#include "rsideWidget.h"

typedef QWidget     LsideWidget;
typedef QWidget     RsideWidget;

class CentralWidget : public QWidget {
    Q_OBJECT
public:
    explicit CentralWidget(QWidget *parent = nullptr);
    ~CentralWidget();

signals:

public slots:

protected:
    void initUI();
    void initConnect();

public:
    LsideWidget*    lside;
    HMultiView*     mv;
    RsideWidget*    rside;
};

#endif // CENTRAL_WIDGET_H
