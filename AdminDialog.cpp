#include "AdminDialog.h"
#include "btnAddInfo.h"



AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent)
{
    setWindowTitle("administrator interface");
    setGeometry(350,120,1200,800);
    setWindowIcon(QIcon(":/icon.png"));
    gridLayout = new QGridLayout;
    vboxLayout = new QVBoxLayout;

    groupBoxChoice=new QGroupBox;
    groupBoxShowInfo=new QGroupBox;
    setLayout(gridLayout);
    gridLayout->addWidget(groupBoxChoice,0,0,1,1);
    gridLayout->addWidget(groupBoxShowInfo,0,1,1,2);
    groupBoxChoice->setLayout(vboxLayout);
    groupBoxChoice->setTitle("please choose");
    groupBoxShowInfo->setTitle("information");
    groupBoxChoice->setStyleSheet("QGroupBox {border: 1px solid gray;border-radius: 9px;margin-top: 0.5em;}QGroupBox::title {subcontrol-origin:margin;left: 10px;padding: 0 3px 0 3px;}");
    groupBoxShowInfo->setStyleSheet("QGroupBox {border: 1px solid gray;border-radius: 9px;margin-top: 0.5em;}QGroupBox::title {subcontrol-origin:margin;left: 10px;padding: 0 3px 0 3px;}");
    groupBoxChoice->setFixedSize(230,750);
    groupBoxShowInfo->setFixedSize(940,750);
    btnLogout= new QPushButton;
    btnAddInfo= new QPushButton;
    btnDeleInfo= new QPushButton;
    btnChangeInfo= new QPushButton;
    btnShowBaseInfo= new QPushButton;
    btnShowGradeInfo= new QPushButton;
    btnLogout->setFixedSize(200,50);
    btnAddInfo->setFixedSize(200,50);
    btnDeleInfo->setFixedSize(200,50);
    btnChangeInfo->setFixedSize(200,50);
    btnShowBaseInfo->setFixedSize(200,50);
    btnShowGradeInfo->setFixedSize(200,50);

    btnLogout->setText("log out system");
    btnAddInfo->setText("add new information");
    btnDeleInfo->setText("delete a information");
    btnChangeInfo->setText("change a information");
    btnShowBaseInfo->setText("show base information");
    btnShowGradeInfo->setText("show grade information");
    vboxLayout->addWidget(btnLogout);
    vboxLayout->addWidget(btnAddInfo);
    vboxLayout->addWidget(btnDeleInfo);
    vboxLayout->addWidget(btnChangeInfo);
    vboxLayout->addWidget(btnShowBaseInfo);
    vboxLayout->addWidget(btnShowGradeInfo);

    stackLayout= new QStackedLayout;
    groupBoxShowInfo->setLayout(stackLayout);
    btnAddInfoWidget* BtnAddInfoWidget=new btnAddInfoWidget;
    stackLayout->addWidget(BtnAddInfoWidget);
    BtnAddInfoWidget->setFixedSize(900,700);


    connect(btnLogout, SIGNAL(clicked()), this, SLOT(on_btnLogout_clicked()));
    connect(btnAddInfo, SIGNAL(clicked()), this, SLOT(on_btnAddInfo_clicked()));
    connect(btnDeleInfo, SIGNAL(clicked()), this, SLOT(on_btnDeleInfo_clicked()));
    connect(btnChangeInfo, SIGNAL(clicked()), this, SLOT(on_btnChangeInfo_clicked()));
    connect(btnShowBaseInfo, SIGNAL(clicked()), this, SLOT(on_btnShowBaseInfo_clicked()));
    connect(btnShowGradeInfo, SIGNAL(clicked()), this, SLOT(on_btnShowGradeInfo_clicked()));
}

AdminDialog::~AdminDialog()
{

}
void AdminDialog::on_btnLogout_clicked()
{
    this->close();
}
void AdminDialog::on_btnAddInfo_clicked()
{
    stackLayout->setCurrentIndex(0);
}
void AdminDialog::on_btnDeleInfo_clicked()
{

}
void AdminDialog::on_btnChangeInfo_clicked()
{

}
void AdminDialog::on_btnShowBaseInfo_clicked()
{

}
void AdminDialog::on_btnShowGradeInfo_clicked()
{

}