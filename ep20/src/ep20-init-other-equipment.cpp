#include    "ep20.h"

//------------------------------------------------------------------------------
//
//------------------------------------------------------------------------------
void EP20::initOtherEquipment(const QString &modules_dir, const QString &custom_cfg_dir)
{
    (void) modules_dir;
    (void) custom_cfg_dir;

    horn = new TrainHorn();
    horn->read_config("train-horn");
    connect(horn, &TrainHorn::soundPlay, this, &EP20::soundPlay);
    connect(horn, &TrainHorn::soundSetVolume, this, &EP20::soundSetVolume);
    connect(horn, &TrainHorn::soundStop, this, &EP20::soundStop);

    // Система подачи песка
    sand_system = new SandingSystem();
    sand_system->read_config("sanding-system");
    sand_system->setSandMassMax(payload_mass);
    sand_system->setSandLevel(payload_coeff);
}
