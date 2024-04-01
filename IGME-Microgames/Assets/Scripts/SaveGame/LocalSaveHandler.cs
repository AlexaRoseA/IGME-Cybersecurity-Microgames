using System;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Text;

public class LocalSaveHandler
{
    public void Save(GameData data)
    {

        BinaryFormatter formatter = new BinaryFormatter();
        string path = Path.Combine(Application.persistentDataPath, "agency.save");
        FileStream stream = new FileStream(path, FileMode.Create);

        //serialize, write to file, then close
        formatter.Serialize(stream, data);
        stream.Close();

    }

    public void Load(Action<GameData> callback)
    {

        string path = Path.Combine(Application.persistentDataPath, "agency.save");
        FileStream stream = new FileStream(path, FileMode.Open);

        BinaryFormatter formatter = new BinaryFormatter();

        GameData data = (GameData)formatter.Deserialize(stream);
        stream.Close();

        callback(data);
    }
}
