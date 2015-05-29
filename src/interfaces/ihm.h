#ifndef IHM_H
#define IHM_H

#include <QWidget>
#include <QString>
#include <QList>
#include <QListWidgetItem>

namespace Ui {
class Ihm;
}

class Ihm : public QWidget
{
	Q_OBJECT

public:
	explicit Ihm(QWidget *parent = 0);
	~Ihm();

		// Functions
		void init();


		// -----------------------------------------------------------------
		// MAP
		// -----------------------------------------------------------------
		void createMapList();
		void mapLoad(int idMap);
		void mapChangeRobotPosition(int idRobot);

		// -----------------------------------------------------------------
		// HISTORY
		// -----------------------------------------------------------------

		void historyLoad();
		void historyAddMessage(QString message);

		// -----------------------------------------------------------------
		// CONNEXION
		// -----------------------------------------------------------------

		void loginServer(QString addressIP, int numPort);
		void logoutServer();

		// -----------------------------------------------------------------
		// INIT
		// -----------------------------------------------------------------
		void createInitList();
		void loadInitPosition(int idPosition);

		// -----------------------------------------------------------------
		// ROBOT
		// -----------------------------------------------------------------
		void createRobotList();
		void robotSelection(int idRobot);

		// -----------------------------------------------------------------
		// STATUS
		// -----------------------------------------------------------------

		void getRobotStatus(int idRobot);
		void getRobotPositionX(int idRobot);
		void getRobotPositionY(int idRobot);

private:
	Ui::Ihm *ui;

	bool initDone = false;
	bool connected = false;

	bool marioModeActive = false;
	bool fmModeActive = false;
};

#endif // IHM_H
