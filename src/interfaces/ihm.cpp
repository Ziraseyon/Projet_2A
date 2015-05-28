#include "ihm.h"
#include "ui_ihm.h"

Ihm::Ihm(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::Ihm)
{
	ui->setupUi(this);
	init();
}

Ihm::~Ihm()
{
	delete ui;
}

void Ihm::init()
{
	ui->marioHistory_List->addItem("Bonjour");
}
