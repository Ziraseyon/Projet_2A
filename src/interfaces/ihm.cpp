#include "ihm.h"
#include "ui_ihm.h"

Ihm::Ihm(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::Ihm)
{
	ui->setupUi(this);
	//init();
}

Ihm::~Ihm()
{
	delete ui;
}

void Ihm::init()
{
	ui->marioHistory_List->addItem("Bonjour");
}

// =============================================================================
// FUNCTIONS
// =============================================================================





// -----------------------------------------------------------------------------
// MAP
// -----------------------------------------------------------------------------

/**
 * Dating the robot position on the map after data reception
 * @brief mapChangeRobotPosition
 * @param idRobot Robot's id
 */
void Ihm::mapChangeRobotPosition(int idRobot)
{
	// TODO
}

// -----------------------------------------------------------------------------
// HISTORY
// -----------------------------------------------------------------------------

/**
 * Add a new entry to the history
 * @brief historyAddMessage
 * @param message message to add
 */
void Ihm::historyAddMessage(QString message)
{
	QTime t;
	ui->historyList->addItem (t.currentTime ().toString ("hh:mm:ss.zzz") + "  -  " + message + ".");
	ui->historyList->scrollToBottom ();
}

// -----------------------------------------------------------------------------
// CONNEXION
// -----------------------------------------------------------------------------

/**
 * Connect to the server
 * @brief loginServer
 * @param addressIP adresse IP of the server
 * @param numPort port number of the server
 */
void Ihm::loginServer(QString addressIP, int numPort)
{
	//TODO
}

/**
 * Disconnect from the server
 * @brief logoutServer
 */
void Ihm::logoutServer()
{
	//TODO
}

// -----------------------------------------------------------------------------
// INIT
// -----------------------------------------------------------------------------

/**
 * create a list of all the initial configurations to insert in the Init comboBox
 * @brief createInitList
 * @return the list of all the Initial configurations
 */
void Ihm::createInitList()
{
	QStringList initList;
	initList.append("---");
	initList.append ("Conf 1 - Opposite Side");
	initList.append ("Conf 2 - Same Side, Op Dir");
	initList.append ("Conf 3 - Same Side, Same Dir");

	ui->initCombo->addItems (initList);
}
/**
 * Loading the environnement configuration
 * @brief loadInitPosition
 * @param idPosition Starting position id
 */
void Ihm::loadInitPosition(int idPosition)
{
	//TODO
}

// -----------------------------------------------------------------------------
// ROBOT
// -----------------------------------------------------------------------------

/**
 * create a list of all the robots to insert in the robot comboBox
 * @brief createRobotList
 * @return the list of all the robots
 */
void Ihm::createRobotList()
{
	QStringList robotList;
	robotList.append("---");
	robotList.append ("BOB6 - Robot EV3");
	robotList.append ("BOB8 - Robot NXT");

	ui->robotCombo->addItems (robotList);
}
/**
 * Selecting the robot to command
 * @brief robotSelection
 * @param idRobot Robot's id
 */
void Ihm::robotSelection(int idRobot)
{
	//TODO
}

// -----------------------------------------------------------------------------
// STATUS
// -----------------------------------------------------------------------------

/**
 * Get the current status (Master or Slave)
 * @brief getRobotStatus
 * @param idRobot Robot's id
 */
void Ihm::getRobotStatus(int idRobot)
{
	//TODO
}

/**
 * Get Robot X Position
 * @brief getRobotPositionX
 * @param idRobot Robot's id
 */
void Ihm::getRobotPositionX(int idRobot)
{
	//TODO
}

/**
 * Get Robot Y Position
 * @brief getRobotPositionY
 * @param idRobot Robot's id
 */
void Ihm::getRobotPositionY(int idRobot)
{
	//TODO
}
